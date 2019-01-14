#include <stdio.h>
#include <unistd.h>

#ifdef getchar
#undef getchar
#endif

int getchar(void)
{
    char c;

    return (read(0, &c, 1) == 1) ? (unsigned char) c : EOF;
}

int getchar1(void)
{
    static char buf[BUFSIZ];
    static char *bufp = buf;
    static int n = 0; //won't initialize again because of static

    if (n == 0)
    {
        n = read(0, buf, sizeof buf);
        bufp = buf;
    }
    return (--n >= 0) ? (unsigned char) *bufp++ : EOF;
}


int main(int argc, char const *argv[]) {

    printf("char: %c\n", getchar());
    printf("char: %c\n", getchar());
    printf("char: %c\n", getchar());

    return 0;
}
