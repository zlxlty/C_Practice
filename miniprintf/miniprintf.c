#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

void miniprintf(char * fmt, ...)
{
    va_list ap;
    char *p;

    union output_values{
        char *sval;
        int ival;
        double dval;
        char cval;
    } outval;

    va_start(ap, fmt);
    for (p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }
        switch(*++p)
        {
            case 'd':
                outval.ival = va_arg(ap, int);
                printf("%d", outval.ival);
                break;
            case 'f':
                outval.dval = va_arg(ap, double);
                printf("%f", outval.dval);
                break;
            case 'c':
                outval.cval = va_arg(ap, int);
                putchar(outval.cval);
                break;
            case 's':
                for (outval.sval = va_arg(ap, char *); *outval.sval; outval.sval++)
                    putchar(*outval.sval);
                break;
        }
    }
    va_end(ap);
}

int main(int argc, char const *argv[]) {

    miniprintf("hello %d %f %c %s\n", 23, 24.23, 'x', "hello_world");
    return 0;
}
