#include <stdio.h>
#include "string_test.h"

int main(int argc, char const *argv[]) {

    char a[] = "Hello world";

    a[1] = 'A';

    printf("%s\n", a);

    char pa[50], pb[50];

    // pa = &a[0];
    // pa = a;

    strcpy1(pa, "Hello world"); //it works
    strcpy2(pb, "Hello world");
    /* *(pa+1) = 'A';
        Segmentation fault

        Compiler marks the constant string ("Hello world") as read-only

        https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault
    */

    printf("%s\n", pa);

    /* a = "Hello world";
        it doesn't work :(
        Although a can be assign to a pointer and has value of
        &a[0], it is still an array type.
        YOU CANNOT ASSIGN TO AN ARRAY!!!
    */
    printf("%c\n", *a);

    printf("str1: %d\n", strlen1(a));

    printf("str2: %d\n", strlen2(a));

    printf("%d\n", strcmp1(pa, pb));

    printf("%s\n", strncat1(pa, pb, 20));

    char x[10] = "Hello";
    char y[10] = "Hello";

    printf("%d\n", strend(x, y));
    // printf("%s\n", pa);

    return 0;
}
