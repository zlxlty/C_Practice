#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 1;
    int b = 2;

    int c = a+++++b;

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
