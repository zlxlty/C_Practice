#include <stdio.h>
#include <string.h>
#include "parray.h"

int getline1(char *s, const int lim);

int main(int argc, char const *argv[]) {

    char line[MAXLINE][MAXLEN];

    int len, i = 0, found = 0;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while (getline1(line[i], MAXLINE) > 0)
            i++;
        i = 0;
        while (strlen(line[i]) > 1)
        {
            if (strstr(line[i], argv[1]) != NULL)
            {
                printf("%s", line[i]);
                found++;
            }
            i++;
        }
    printf("%d is found\n", found);
    return found;
}
