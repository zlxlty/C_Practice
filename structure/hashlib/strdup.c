#include "hash.h"

char *strdup1(char *s)
{
    char *p;

    p = (char *)malloc(strlen(s)+1);
    if (p != NULL)
        strcpy(p, s);

    return p;
}
