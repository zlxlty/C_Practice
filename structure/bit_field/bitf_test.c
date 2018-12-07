#include <stdio.h>
#include <stdlib.h>

struct {
    unsigned int is_keyword : 1;
    unsigned int is_extern : 1;
    unsigned int is_static : 1;
} flags;

int main(int argc, char const *argv[]) {

    printf("%ld\n", sizeof(flags));
    flags.is_keyword = 1;
    printf("%#x\n", flags.is_keyword);

    return 0;
}
