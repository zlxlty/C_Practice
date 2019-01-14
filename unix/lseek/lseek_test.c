#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int get(int fd, long pos, char *buf, int n)
{
    if (lseek(fd, pos, 0) >= 0)
        return read(fd, buf, n);
    else
        return -1;
}

int main(int argc, char const *argv[]) {

    int fd;
    char buf[BUFSIZ];
    fd = open("text.txt", O_RDONLY, 0);
    get(fd, 0, buf, 5);

    printf("%s\n", buf);

    return 0;
}
