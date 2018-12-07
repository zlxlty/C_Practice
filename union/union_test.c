#include <stdio.h>
#include <stdlib.h>

#define NSYM 100

struct {
    char *name;
    int flags;
    int utype;
    union {
        int val;
        float fval;
        char *val;
    } u;
} symtab[NSYM];

int main(int argc, char const *argv[]) {
    symtab[0].val = 0;
    return 0;
}
