#include <stdio.h>
#include "main.h"

/**
*print_alphabet - prints the complete characters
*
*Return: Always 0.
*/

void print_alphabet(void)
{

	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar (n);
		}
		_putchar('\n');
	}
}
