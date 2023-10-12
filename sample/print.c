#include "lib.h"

void print(str placeholder, ...);

int main()
{
    str n = "miles";
    print("hello %s\n", n);
    print("i am %d\n", 19);
}

void print(str placeholder, ...)
{
    va_list args;
    va_start(args, placeholder);

    while (*placeholder)
    {
        if (*placeholder == '%')
        {
            placeholder++;

            if (*placeholder == '\n')
            {
                putchar('\n');
            }
            else if (*placeholder == 'd')
            {
                int x = va_arg(args, int);
                printf("%d", x);
            }
            else if (*placeholder == 'f')
            {
                double x = va_arg(args, double);
                printf("%f", x);
            }
            else if (*placeholder == 's')
            {
                str x = va_arg(args, str);
                printf("%s", x);
            }
        }
        else
        {
            putchar(*placeholder);
        }
        placeholder++;
    }
    va_end(args);
}