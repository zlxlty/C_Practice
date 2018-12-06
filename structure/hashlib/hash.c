#include "hash.h"

static struct nlist *hashtab[HASHSIZE];

unsigned hash(char *s)
{
    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 *hashval;

    return hashval % HASHSIZE;
}

struct nlist *lookup(char *s)
{
    struct nlist *np;

    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->name) == 0)
            return np;

    return NULL;
}

struct nlist *install(char *name, char *defn)
{
    struct nlist *np;
    unsigned hashval;

    if ((np = lookup(name)) == NULL)
    {
        np = (struct nlist *)malloc(sizeof(struct nlist));
        if (np == NULL || (np->name = strdup1(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    } else
        free((void *) np->defn);
    if ((np->defn = strdup1(defn)) == NULL)
        return NULL;
    return np;
}

int undef(char *name)
{
    struct nlist *np, *prev;
    unsigned hashval;

    prev = NULL;
    hashval = hash(name);

    for (np = hashtab[hashval]; np != NULL; np = np->next)
    {
        if (strcmp(name, np->name) == 0)
            break;
        prev = np;
    }
    if (np != NULL)
    {
        if (prev == NULL)
        hashtab[hashval] = np->next;
        else
        prev->next = np->next;
        free((void *) np->defn);
        free((void *) np->name);
        free((void *) np);
        return 0;
    }else
    {
        printf("Name not found\n");
        return -1;
    }
}
