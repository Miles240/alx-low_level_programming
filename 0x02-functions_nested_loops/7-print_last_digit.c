#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of the input value
 * @i: parameter to be checked
 *
 * Return: 0
 */

int print_last_digit(int i)
{

	int n = i % 10;

	if (n < 0)
	{
		n = (-n);
	}

	_putchar(n + '0');
	return (n);
}
