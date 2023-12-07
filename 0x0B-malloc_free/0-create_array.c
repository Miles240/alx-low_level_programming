#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function create an array of characters
 *  based on the size of int
 * @size: - size of int
 * @c: variable to store the array of characters
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
