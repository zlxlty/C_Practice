#include "string_test.h"

char *strncpy1(char *des, const char *src, int n)
{
    while (n-- > 0 && (*des++ = *src++))
        ;
}

char *strncat1(char *des, const char *src, int n)
{
    char *start;
    start = des;

    while (*des)
        des++;

    while ((n-- > 0) && (*des++ = *src++))
        ;

    return start;
}

int strncmp1(const char *a, const char *b, int n)
{
    int i;

    for (i = 0; i < n || a[i] == b[i]; i++)
        if (a[i] == '\0')
            return 0;
    if (i == n)
        return 0;

    return a[i] - b[i];
}
