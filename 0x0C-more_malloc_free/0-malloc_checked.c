#include "main.h"
#include <stdlib.h>

/**
 *
 */

void *malloc_checked(unsigned int b)
{
    int *ptr;

    ptr = malloc(sizeof(b));


    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}