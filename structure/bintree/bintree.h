#ifndef _BINTREE_H_
#define _BINTREE_H_

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "talloc.h"
#include "getch.h"

#define MAXWORD 100
/*
struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};
*/
struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);

#endif
