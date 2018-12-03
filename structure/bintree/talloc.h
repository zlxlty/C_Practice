#ifndef _TALLOC_H_
#define _TALLOC_H_

#include <string.h>
#include <stdlib.h>

struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

struct tnode *talloc(void);
char *strdup1(char *);

#endif
