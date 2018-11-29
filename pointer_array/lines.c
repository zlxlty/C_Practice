#include <stdio.h>
#include <string.h>
#include "parray.h"

extern char *alloc(const int len);

int getline1(char *s, const int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i-1;
}

int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while((len = getline1(line, MAXLEN)) > 0)
    {
        if (nlines > maxlines || (p = alloc(len+1)) == NULL)
            return -1;
        else{
            line[len] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines)
{
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}
