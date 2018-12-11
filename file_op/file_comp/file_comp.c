#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 1000

static struct {
    unsigned int number : 1;
    unsigned int same : 1;
} flags;

int main(int argc, char const *argv[]) {

    FILE *fp1;
    FILE *fp2;
    long linenum;
    char c;
    char const *prog = argv[0];
    char *filen1 = NULL;
    char *filen2 = NULL;
    char line1[MAXLEN], line2[MAXLEN];

    flags.number = flags.same = 0;

    if (argc <= 2)
    {
        fprintf(stderr, "%s: two files required\n", prog);
        exit(1);
    } else {
        while (--argc > 0)
        {

            if ((c = (*++argv)[0]) == '-')
            {
                while (c = *++argv[0])
                {
                    switch (c) {
                        case 'n':
                            flags.number = 1;
                            break;
                        case 's':
                            flags.same = 1;
                            break;
                        default:
                            fprintf(stderr, "%s: illegal option %c\n", prog, c);
                    }
                }
            }
            else if (isalpha(c))
            {
                if (filen1 == NULL)
                {
                    filen1 = (char *)malloc(sizeof(char) * MAXLEN);
                    strcpy(filen1, *argv);
                }
                else if (filen2 == NULL)
                {
                    filen2 = (char *)malloc(sizeof(char) * MAXLEN);
                    strcpy(filen2, *argv);
                }
                else
                    fprintf(stderr, "%s: %s is excluded\n", prog, *argv);
            }
        }
    }

    if ((fp1 = fopen(filen1, "r")) == NULL)
    {
        fprintf(stderr, "%s: can't open %s\n", prog, filen1);
        free(filen1);
        free(filen2);
        exit(2);
    }
    else if ((fp2 = fopen(filen2, "r")) == NULL)
    {
        fprintf(stderr, "%s: can't open %s\n", prog, filen2);
        free(filen1);
        free(filen2);
        exit(2);
    }
    else
    {
        linenum = 0;
        while (fgets(line1, MAXLEN, fp1) && fgets(line2, MAXLEN, fp2))
        {
            linenum++;

            if (flags.same)
            {
                if (strcmp(line1, line2) == 0)
                {
                    if (flags.number)
                        printf("%ld| ", linenum);
                    fprintf(stdout, "%s\n", line1);
                }
            } else {
                if (strcmp(line1, line2) != 0)
                {
                    if (flags.number)
                        printf("%ld| ", linenum);
                    fprintf(stdout, "\t%s\t%s\n", line1, line2);
                }
            }
        }
    }

    free(filen1);
    free(filen2);
    exit(0);
}
