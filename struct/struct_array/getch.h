#ifndef _GETCH_H_
#define _GETCH_H_

#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100

int getch(void);
void ungetch(int c);
int getword(char *word, int lim);

#endif
