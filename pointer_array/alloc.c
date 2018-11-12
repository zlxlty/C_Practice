#include "parray.h"

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(const int len)
{
    if (allocbuf + ALLOCSIZE - allocp >= len)
    {
        allocp += len;
        return allocp - len;
    }else
        return 0;
}

void afree(char *p)
{
    if (p >= allocbuf && p <= allocbuf + ALLOCSIZE)
        allocp = p;
}
