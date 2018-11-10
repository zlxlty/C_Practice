#include <stdio.h>
#define STR "Hello world"

int strlen1(char *p);
int strlen2(char *p);

int main(int argc, char const *argv[]) {

    char a[] = "Hello world";

    char *pa;

    // pa = &a[0];
    pa = a;

    pa = "Hello world"; //it works

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

    return 0;
}

int strlen1(char *p)
{
    int n;
    for (n = 0; *p != '\0'; n++, p++)
        ;
    return n;
}

int strlen2(char *p)
{
    char *tp;
    for (tp = p; *tp != '\0'; *tp++)
        ;

    return tp - p;
}
