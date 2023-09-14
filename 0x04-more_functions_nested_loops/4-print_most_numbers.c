#include "main.h"

/**
 *print_most_numbers - print all numbers except 2 and 4
 *@void: parameter
 *
 * Return: 0
 */

void print_most_numbers(void)
{

	int num;

	for (num = 48; num <= 57; num++)
	{

		if (num == 50 || num == 52)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
