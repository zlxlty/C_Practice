#include <stdio.h>

int main(int argc, char const *argv[]) {

    while (argc-- > 1)
        printf((argc > 1) ? "%s " : "%s", *++argv);
    printf("\n");
    return 0;
    
}
