#include <stdio.h>
#include <stdlib.h>

typedef char * string;

typedef union ntype_data
{
    int i_data;
    float f_data;
    double d_data;
    string s_data;
} Data;

int main(int argc, char const *argv[]) {
    Data d;
    d.i_data = 1;
    string str = "helllo";
    d.s_data = str;
    // d.f_data = 1.2;
    printf("%s\n", d.s_data);
    return 0;
}
