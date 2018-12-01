#include <stdio.h>
#include <string.h>
#include "parray.h"

extern int readlines(char *lineptr[], int maxlines);
extern void writelines(char *lineptr[], int nlines);
extern void qsort1(void *lineptr[], int left, int right, int (*comp)(void *, void *));
extern int numcmp(char *s1, char *s2);

char *lineptr[MAXLINE];

int main(int argc, char const *argv[]) {

    int nlines;
    int numeric = 0;

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINE)) >= 0)
    {
        qsort1((void **)lineptr, 0, nlines-1, (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("intput too big to sort\n");
        return 1;
    }
    return 0;
}
