#include "keywords.h"
#include "getch.h"

static struct key keytab[] = {
    {"auto"    , 0},{"break"   , 0},{"case"    , 0},{"char"    , 0},
    {"const"   , 0},{"continue", 0},{"default" , 0},{"do"      , 0},
    {"double"  , 0},{"else"    , 0},{"enum"    , 0},{"extern"  , 0},
    {"float"   , 0},{"for"     , 0},{"goto"    , 0},{"if"      , 0},
    {"int"     , 0},{"long"    , 0},{"register", 0},{"return"  , 0},
    {"short"   , 0},{"signed"  , 0},{"sizeof"  , 0},{"static"  , 0},
    {"struct"  , 0},{"switch"  , 0},{"typedef" , 0},{"union"   , 0},
    {"unsigned", 0},{"void"    , 0},{"volatile", 0},{"while"   , 0}
};

extern int getword(char *word, int lim);
extern int binsearch(char *word, struct key tab[], int n);

int main(int argc, char const *argv[]) {

    int n;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;

    for (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%4d %s\n", keytab[n].count, keytab[n].word);

    return 0;
}
