#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks and print a particular sign.
 * @n: parameter to be checked
 *
 * Return: 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (n);
}
