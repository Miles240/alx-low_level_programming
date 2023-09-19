#include "main.h"

/**
* swap_int - swaps the integers int a; and int b
* @a: swaps and stores in b
* @b: swaps and stores in a
*
* Return: 0
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *b;
	*b = *a;
	*a = new;
}
