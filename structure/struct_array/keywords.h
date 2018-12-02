#ifndef _KEYWORDS_H_
#define _KEYWORDS_H_

#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct key {
    char *word;
    int count;
};

#define MAXWORD 100
#define NKEYS (sizeof (keytab) / sizeof (keytab[0]))

int binsearch(char *word, struct key tab[], int n);

#endif
