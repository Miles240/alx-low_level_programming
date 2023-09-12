#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 -is a function that Prints the complete characters
 *
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{

	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
