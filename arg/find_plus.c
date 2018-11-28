#include <stdio.h>
#include <string.h>
#include "parray.h"

extern int getline1(char *s, const int lim);

int main(int argc, char const *argv[]) {
    char line[MAXLINE];
    long linenum = 0;
    int c, except = 0, number = 0, found = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c) {
                case 'x':
                    except = 1;
                    break;
                case 'n':
                    number = 1;
                    break;
                default:
                    printf("find: illegal option %c\n", c);
                    argc = 0;
                    found = -1;
                    break;
            }

    if (argc != 1)
        printf("Usage: find -x -n pattern\n");
    else
        while (getline1(line, MAXLINE) > 0) {
            linenum++;
            if ((strstr(line, *argv) != NULL) != except) {
                if (number)
                    printf("%ld\n", linenum);
                printf("%s", line);
                found;
            }
        }

    return found;
}
