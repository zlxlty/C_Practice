#include <stdio.h>
#include <string.h>
#include "parray.h"

extern int getline1(char *s, const int lim);
extern char *alloc(const int len);

int main(int argc, char const *argv[]) {

    char *line[MAXLINE];

    int len, i = 0, found = 0;

    for (i = 0; i < MAXLINE; i++)
        line[i] = alloc(MAXLEN);

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        for (i = 0; getline1(line[i], MAXLEN) > 0; i++)
            ;

        for (i = 0; strlen(line[i]) > 1; i++)
        {
            if (strstr(line[i], argv[1]) != NULL)
            {
                printf("%s", line[i]);
                found++;
            }
        }
    printf("%d is found\n", found);
    return found;
}
