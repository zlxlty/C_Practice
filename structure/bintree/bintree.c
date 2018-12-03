#include "bintree.h"

struct tnode *addtree(struct tnode *p, char *w){

    int cond;

    if (p == NULL)
    {
        p = talloc();
        p->word = strdup1(w);
        p->count = 1;
        p->left = p->right = NULL;
    }else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else if (cond > 0)
        p->right = addtree(p->right, w);

    return p;
}

void treeprint(struct tnode *p){

    if (p != NULL)
    {
        treeprint(p->left);
        printf("%4d|%s\n", p->count, p->word);
        treeprint(p->right);
    }
}
