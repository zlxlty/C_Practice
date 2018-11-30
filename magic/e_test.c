#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned i, j, k = 0, n = 1e9;
    for (i = 0; i < n; i++)
        for (j = 0; j < RAND_MAX; j += rand())
            k++;
    printf("%f\n", (double)k / n);

    // return 0;
}
