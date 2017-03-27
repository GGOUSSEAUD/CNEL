/* ppcm.y
 parseur de ppcm : le code est genere au fur et a mesure du parsing
 */
%{
# include <stdio.h>

char * fonction;		/* le nom de la fonction courante */

# include "ppcm.h"

# define YYDEBUG 1
%}

%union {
  int i;			/* constantes, etiquettes et nbre d'arg. */
  char * c;			/* variables et fonctions */
};

%type <c> tab
%token <c> YNOM
%token <i> YNUM

%token YTYPE YIF YELSE YWHILE YFOR YRETURN 
%term LSOCKET RSOCKET YAND YOR

%right '=' 
%nonassoc YNEQ
%left YDECR YINCR
%left '+' '-'
%left '*' '/' '%'
%left FORT




%%
programme : /* rien */		/* point d'entree : rien que des fonctions */
	| programme fonction
	;
.listinstr : /* rien */		/* liste d'instructions */
	| .listinstr instr
	;
fonction: YTYPE YNOM '('
		{ printf("Fonction %s(",$2); }
	  .listarg ')' '{'
		{ printf(") Debut \n\n"); nbtabu++; t(nbtabu); }
	  .listvar
		{ }
	  .listinstr '}'
		{ nbtabu=0; printf("\n"); t(nbtabu); printf("Fin"); }
	;

CallFonction: YNOM 
	{ printf("Appel %s(",$1); }
	'(' .listexpr ')'
	{ printf(")"); } 
;

.listarg : /* rien */		/* liste des arguments a fournir a l'appel */
	| listnom2
	;
.listvar : /* rien */		/* liste des variables de la fonction */
        | .listvar YTYPE  listnom ';'
        | .listvar tabdecla ';'
        { printf("\n"); t(nbtabu); }
        
    ;
listnom	: YNOM	                /* la liste des noms : arguments ou variables */
		{  }
	| listnom ',' YNOM
		{ }
	;

listnom2 : YTYPE YNOM { printf("%s", $2); }
	| listnom2 ',' YTYPE YNOM
		{ printf(",%s",$4); }
	;


instr	: ';'			/* Toutes les instructions */
	| '{' .listinstr '}'
	{  }
	| expr ';'
		{ printf("\n"); t(nbtabu); }
	| ifdebut instr
		{ nbtabu--; printf("\n"); t(nbtabu); printf("FinSi\n"); t(nbtabu); } 
	| YELSE
  		{ printf("else faire:\n"); nbtabu++; t(nbtabu); }
	  instr
		{ nbtabu--;  printf("\n"); t(nbtabu); printf("FinElse\n"); t(nbtabu); }
	
	| ifdebut '{' .listinstr '}' 
		{ nbtabu--; printf("\n"); t(nbtabu); printf("FinSi\n"); t(nbtabu); }
	
	| YELSE 
	{ printf("else faire:\n"); nbtabu++; t(nbtabu); }
	'{'.listinstr '}'
	{ nbtabu--; printf("\n"); t(nbtabu); printf("FinElse\n"); t(nbtabu); }
	
	| YWHILE '('
		{ printf("\n"); t(nbtabu); printf("TantQue : "); }
	  expr ')'
		{ printf(" faire :\n"); nbtabu++; t(nbtabu); }
	  instr
		{ printf("FinTantQue\n"); t(nbtabu); }

	| YWHILE '('
		{ printf("\n"); t(nbtabu); printf("TantQue : "); }
	  expr ')' '{'
		{ printf(" faire :\n"); nbtabu++; t(nbtabu); }
	  .listinstr '}'
		{ printf("FinTantQue\n"); t(nbtabu);}	

	| ret expr ';'
		{ printf("\n"); t(nbtabu); } 
	;
	| YFOR '(' 
	{ printf("\n"); t(nbtabu); printf("Pour: "); }
	.listexprfor ';'
	{ printf(" TantQue "); }
	exprfor ';'
	{ printf(" Apres chaque iteration faire: "); nbtabu++;  }
	.listexprfor ')' 
	{ printf("\n"); t(nbtabu); printf("Iteration:\n"); t(nbtabu); }
	instr 
	{ nbtabu--; printf("FinIteration\n"); 
		 t(nbtabu); printf("FinPour\n\n"); nbtabu--; t(nbtabu); }

	| YFOR '(' 
	{ printf("\n"); t(nbtabu); printf("Pour: "); }
	.listexprfor ';'
	{printf(" TantQue ");}
	exprfor ';'
	{printf(" Apres chaque iteration faire: "); nbtabu++; }
	.listexprfor ')' '{' 
	{ printf("\n"); t(nbtabu); printf("Iteration:\n"); t(nbtabu); }
	.listinstr '}' 
	{ nbtabu--; printf("FinIteration\n");
		 t(nbtabu); printf("FinPour\n\n"); nbtabu--; t(nbtabu); }
	;
	

ret : YRETURN
{ printf("Renvoi "); }

ifdebut : YIF '(' 
		{ printf("\n"); t(nbtabu); printf("Si : "); }
		expr ')'
		{ printf(" faire:\n"); nbtabu++; t(nbtabu); }
		
	;
/* toutes les expressions*/
expr	: YNOM
		{ printf("%s", $1); }
	| '('
	{ printf("("); }
	 expr
	 { } 
	 ')'
	{  printf(")"); }
	| YNUM
	  	{ printf("%d",$1); }
	| tab
	{  }
	| tab '='
	{ printf("="); }
	
	 expr
	 {  }
	| prep expr
		{  }
	| prepplus expr
	{ printf(")"); }
	| prepmoin expr
	{ printf(")"); }
	| prepmult expr
	{ printf(")"); }
    | prepdiv expr
	{ printf(")"); }
	

	| YNOM YDECR
	{ printf("%s=%s-1",$1,$1); }
	| YNOM YINCR
	{ printf("%s=%s+1",$1,$1); }

	| tab '+' '='
	{ printf("%s",$1); }

	| neg expr %prec FORT
		{ }   
	| CallFonction
	{ }

	/*| expr '+' expr
		{ }  */
/*	| expr '-' expr
		{ }
	| expr '*' expr
	{  }*/
	| expr YNEQ 
	{ printf(" différent de "); }
        expr
/*	| expr '/' expr
		{ }
	| expr '%' expr
		{  } */
	/*| expr '>' expr
		{  }
	| expr '<' expr
		{  } */		
	;

prep : YNOM '='
	{ printf("%s=", $1); }
	| YNUM '+'
	{ printf("%d+",$1); }
	| YNOM '+'
	{ printf("%s+",$1); }
	| tab '+'
	{ printf("+"); }
	| YNUM '-'
	{ printf("%d-",$1); }
	| YNOM '-'
	{ printf("%s-",$1); }
	| tab '-'
	{ printf("-"); }
	| YNUM '*'
	{ printf("%d-",$1); }
	| YNOM '*'
	{ printf("%s-",$1); }
	| tab '*'
	{ printf("*"); }
	| YNUM '/'
	{ printf("%d-",$1); }
	| YNOM '/'
	{ printf("%s-",$1); }
	| tab '/'
	{ printf("/"); }
	
	| expr '>'
	{ printf(">"); }
	| expr '<'
	{ printf("<"); }
	| expr YAND
	{ printf("%s ou "); } 
;

prepplus : YNOM '+' '='
{ printf("%s=%s+(", $1,$1); }
;
prepmoin : YNOM '-' '='
{ printf("%s=%s-(", $1,$1); }
;
prepmult : YNOM '*' '='
{ printf("%s=%s*(",$1,$1); }
;
prepdiv : YNOM '/' '='
{ printf("%s=%s/(",$1,$1); }
;

neg: '-'
	{ printf("-"); }
;	

				/* liste d'expressions (appel de fonction) */
.listexpr : /* rien */
		{  }
	| expr
		{  }
	| expr ','
	{ printf(","); }
	 .listexpr
     {  }	 
;

multsocket: /* rien */
	| LSOCKET 
	{ printf("["); }
	expr
	{ }
	RSOCKET
	{ printf("]"); }
	multsocket
	{ }

	| LSOCKET 
	{ printf("["); }
	expr
	{ }
	RSOCKET
	{ printf("]"); }
	multsocket
	{ }
	'='
	{ printf("="); }
	'{' .listexpr '}'
	{ } 
	
	| LSOCKET 
	{ printf("["); }
	RSOCKET
	{ printf("]"); }
	multsocket
	{ }
	'='
	{ printf("="); }
	'{' .listexpr '}'
	{ } 
	

;

tabdecla : YTYPE YNOM  
	{ printf("%s", $2); }
	multsocket

;


tab : YNOM 
{ printf("%s", $1); }
 multsocket
 { }
 

/////////////////////////////

exprfor	: YNOM
		{ printf("%s", $1); }
	| '(' 
		{ printf("("); }
		exprfor
		{ }
		 ')'
	 { printf(")"); }

	| YNUM
	  	{ printf("%d",$1); } 
	| prepfor exprfor
		{  }
	| prepplusfor exprfor
	{ printf(")"); }
	| prepmoinfor exprfor
	{ printf(")"); }
	| prepmultfor exprfor
	{ printf(")"); }
	| prepdivfor exprfor
	{ printf(")"); }
	| YNOM YDECR
	{ printf("%s=%s-1",$1,$1); }
	| YNOM YINCR
	{ printf("%s=%s+1",$1,$1); }


	/*| '-' expr %prec FORT
		{ }  */
	/*| expr '+' expr
		{ }  */
/*	| expr '-' expr
		{ }
	| expr '*' expr
		{  }
	| expr YNEQ expr
	  	{  } 
	| expr '/' expr
		{ }
	| expr '%' expr
		{  } */
	/*| expr '>' expr
		{  }
	| expr '<' expr
		{  }		
	| YNOM '(' .listexpr ')'
		{ } */
	;

prepfor : YNOM '='
	{ printf("%s=", $1); }
	| YNUM '+'
	{ printf("%d+",$1); }
	| YNOM '+'
	{ printf("%s+",$1); }
	| exprfor '>'
	{ printf(">"); }
	| exprfor '<'
	{ printf("<"); } 
;
prepplusfor : YNOM '+' '='
{ printf("%s=%s+(", $1,$1); }
;
prepmoinfor : YNOM '-' '='
{ printf("%s=%s-(", $1,$1); }
;
prepmultfor : YNOM '*' '='
{ printf("%s=%s*(",$1,$1); }
;
prepdivfor : YNOM '/' '='
{ printf("%s=%s/(",$1,$1); }
;

				/* liste d'expressions (appel de fonction) */
.listexprfor : /* rien */
		{  }
	| exprfor
		{  }
	| exprfor ',' .listexprfor
		{ printf(","); }
	;
%%
main(){
  yyparse();
  return 0;
}

# include "lex.yy.c"		/* yylex et sa clique */

yyerror(char * message){
  extern int lineno;
  extern char * yytext;

  fprintf(stderr, "%d: %s at %s\n", lineno, message, yytext);
}

nomem(){
  fprintf(stderr, "Pas assez de memoire\n");
  exit(1);
}
