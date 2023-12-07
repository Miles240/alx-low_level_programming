#include "variadic_functions.h"

/**
 * sum_them_all - adds all the given parameters
 * @n: number of varibles
 *
 * Return: the total
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x = 0;

	va_list num;

	va_start(num, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		x += va_arg(num, unsigned int);
	}
	va_end(num);
	return (x);
}
