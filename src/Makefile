# Build the C language scanner with Flex
CC=gcc
LEX=flex
CFLAGS=
LIBS=-lfl

all: scanner

scanner: scanner.l
	$(LEX) scanner.l
	$(CC) lex.yy.c $(LIBS) -o scanner

clean:
	rm -f scanner lex.yy.c
