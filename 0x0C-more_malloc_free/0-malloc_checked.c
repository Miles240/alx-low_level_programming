#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -allocates memory and returns the pointer to
 * newly allocate memory
 * @b:amount of memory to be allocated
 *
 * Return:a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
