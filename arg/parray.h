#ifndef _PARRAY_H_
#define  _PARRAY_H_

#define MAXLINE 50
#define MAXLEN 100
#define ALLOCSIZE 100000

int getline1(char *s, const int lim);
int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);
char *alloc(const int len);
void afree(char *p);

#endif
