#include "bintree.h"

extern int getword(char *word, int lim);

int main(void) {

    struct tnode *root;
    char word[MAXWORD];

    root = NULL;
    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            root = addtree(root, word);

    treeprint(root);

    return 0;
}
