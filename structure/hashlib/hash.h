#ifndef _HASH_H_
#define _HASH_H_

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASHSIZE 101

struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
};

unsigned hash(char *s);
char *strdup1(char *s);
struct nlist *lookup(char *s);
struct nlist *install(char *name, char *defn);
int undef(char *name);

#endif
