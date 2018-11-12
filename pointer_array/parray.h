#ifndef _PARRAY_H_
#define  _PARRAY_H_

#define MAXLINE 5000
#define MAXLEN 1000
#define ALLOCSIZE 100000

int getline1(char *s, const int lim);
int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);
void qsort1(char *lineptr[], int left, int right);
char *alloc(const int len);
void afree(char *p);

#endif
