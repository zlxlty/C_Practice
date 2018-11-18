#include "string_test.h"

char *strcat1(char *des, const char *src)
{
    char *start;
    start = des;

    while (*des)
        des++;

    while (*des++ = *src++)
        ;

    return start;
}
