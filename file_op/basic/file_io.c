#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *src, FILE *des);

int main(int argc, char const *argv[]) {

    FILE *fp;
    char const *prog = argv[0];

    if (argc == 1)
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL)
            {
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(1);
            } else {
                printf("%s\n", *argv);
                filecopy(fp, stdout);
                fclose(fp);
            }
    if (ferror(stdout))
    {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    exit (0);
}

void filecopy(FILE *src, FILE *des)
{
    int ch;

    while ((ch = getc(src)) != EOF)
        putc(ch, des);
}
