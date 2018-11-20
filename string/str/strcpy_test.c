#include "string_test.h"

void strcpy1(char *des, const char *src)
{
    while (*des++ = *src++)
        ;
}

void strcpy2(char des[], const char src[])
{
    int i;

    i = 0;
    while ((des[i] = src[i]) != '\0')
        i++;
}
