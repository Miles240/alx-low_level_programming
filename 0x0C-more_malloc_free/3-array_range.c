#include "main.h"

/**
 * array_range - creates an array of integers and returns a pointer
 * to the newly allocated memory
 * @min:starting point
 * @max: endind point
 *
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int i;
	int num_elements;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;
	arr = malloc(num_elements * (sizeof(int)));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
