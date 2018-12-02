#ifndef _PARRAY_H_
#define  _PARRAY_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 5000
#define MAXLEN 1000
#define ALLOCSIZE 100000

int getline1(char *s, const int lim);
int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);
void qsort1(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *s1, char *s2);
char *alloc(const int len);
void afree(char *p);

#endif
