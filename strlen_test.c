#include "string_test.h"

int strlen1(char *p)
{
    int n;
    for (n = 0; *p != '\0'; n++, p++)
        ;
    return n;
}

int strlen2(char *p)
{
    char *tp;
    for (tp = p; *tp != '\0'; *tp++)
        ;

    return tp - p;
}
