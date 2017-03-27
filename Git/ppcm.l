  /* ppcm.l
   analyseur lexical. representation unique des chaines de caracteres
   */
  char * chaine();
  int lineno = 1;
%%
"if"      { return YIF; }
"while"     { return YWHILE; }
"else"      { return YELSE; }
"int"     { return YTYPE; }
"return"    { return YRETURN; }
"float" { return YTYPE; }
"for" { return YFOR; }
"--" { return YDECR; }
"++" { return YINCR; }
"[" { return LSOCKET; }
"]" { return RSOCKET; }
"&&" { return YAND; }
"||" { return YOR; }


[a-zA-Z_][a-zA-Z0-9_]*  { yylval.c = chaine(yytext); return YNOM; }
'.'     { yylval.i = yytext[1]; return YNUM; }
[0-9]+      { yylval.i = atoi(yytext); return YNUM; }
[-+*/%=();{},><]    { return yytext[0]; }
!=      { return YNEQ; }
[ \t\f]     ;
\n      lineno += 1;
.     { fprintf(stderr, "yylex : (%c)\n", yytext[0]); }
"/*"([^*]|("*"+[^/*]))*"*"+"/"  { ; /* Commentaire */ }
%%
static char * chaines[MAXNOM];
static int nchaines = 0;

/* chaine  --  renvoie une representation unique de la chaine argument */

char *
chaine(char * s){
  register char **p, **f;

  for(p = & chaines[0], f = p + nchaines; p < f; p += 1)
    if (strcmp(*p, s) == 0)
      return *p;
  if (nchaines == MAXNOM){
    fprintf(stderr, "Pas plus de %d noms\n", MAXNOM);
    exit(0);
  }
  if ((*p = (char *)malloc(strlen(s) + 1)) == NULL)
    nomem();
  strcpy(*p, s);
  nchaines += 1;
  return *p;
}

yywrap(){ return 1; }
