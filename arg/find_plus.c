#include <stdio.h>
#include <string.h>
#include "parray.h"

extern int getline1(char *s, const int lim);
extern char *alloc(const int len);

int main(int argc, char const *argv[]) {
    char *line[MAXLINE];
    long linenum = 0;
    int c, except = 0, number = 0, found = 0;

    for (linenum = 0; linenum < MAXLINE; linenum++)
        line[linenum] = alloc(MAXLEN);

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
        for (linenum = 0; getline1(line[linenum], MAXLEN) > 0; linenum++)
            ;

        for (linenum = 0; strlen(line[linenum]) > 1; linenum++)
        {
            if ((strstr(line[linenum], *argv) != NULL) != except) {
                if (number)
                    printf("%ld) ", linenum+1);
                printf("%s\n", line[linenum]);
                found++;
            }
        }
    //原来github上没记录是账号原因...
    printf("%d %s found\n", found, (found>1) ? "are" : "is");
    return found;
}
