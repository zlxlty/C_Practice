#include "string_test.h"

int strcmp1(const char *a, const char *b)
{
    for (; *a == *b; a++, b++)
    {
        if (*a == '\0')
            return 0;
    }

    return *a - *b;
}

int strcmp2(const char a[], const char b[])
{
    int i;

    for (i = 0; a[i] == b[i]; i++)
        if (a[i] == '\0')
            return 0;

    return a[i] - b[i];
}
