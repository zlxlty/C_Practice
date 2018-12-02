#include "parray.h"

extern int readlines(char *lineptr[], int maxlines);
extern void writelines(char *lineptr[], int nlines);

extern void qsort1(char *lineptr[], int left, int right);

static char *lineptr[MAXLINE];

int main(int argc, char const *argv[]) {

    int nlines;

    if ((nlines = readlines(lineptr, MAXLINE)) >= 0)
    {
        qsort1(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    }else{
        printf("error: input too big to sort\n");
        return 1;
    }
}
