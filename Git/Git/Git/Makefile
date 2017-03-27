#
# Makefile pour le Plus Petit Compilateur qui Marche
#
# Pour compiler :
#		make a.out
# Si ca ne marche pas, remplacer gcc par cc, bison par yacc, et flex par lex.
#
CFLAGS = -g -O
CC = gcc

O = ppcm.tab.o expr.o					# objets
S = A_lire Makefile expr.c ppcm.h ppcm.l ppcm.y		# sources

clean:
	rm -f *.tab.c lex.yy.c ppcm a.out core *.o *.output *~

a.out: $O
	$(CC) $(CFLAGS) $O

ppcm.tab.c : ppcm.y
	bison ppcm.y

lex.yy.c : ppcm.l
	flex ppcm.l

ppcm.tab.o : ppcm.tab.c lex.yy.c
$O : ppcm.h

imprimer: $(S)
	enscript -B $(S) -o -
