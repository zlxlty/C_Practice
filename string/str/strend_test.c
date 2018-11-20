#include "string_test.h"

int strend(const char a[], const char b[])
{
    int i,j;

    i = j = 0;

    while (a[i])
        i++;
    while (b[j])
        j++;
    while (a[i] == b[j])
    {
        if (j == 0)
            return 1;
        i--;
        j--;
    }
    return 0;
}
