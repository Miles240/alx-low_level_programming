#include "main.h"

/**
 *print_diagonal - prints a diagonal line starting from n
 *@n: number of lines to print
 *
 * Return: 0
 */

void print_diagonal(int n)
{

	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{

			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
