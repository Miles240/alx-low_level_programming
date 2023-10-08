#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: amount of bytes of each element
 *
 * Return: pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * sizeof(*arr));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
