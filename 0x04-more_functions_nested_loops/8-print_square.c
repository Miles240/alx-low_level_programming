#include "main.h"

/**
 *print_square - prints a square with the given input
 *@size: given input
 *
 * Returm: 0
 */

void print_square(int size)
{

	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			_putchar('\n');
			for (i = 0; i <= size; i++)
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}