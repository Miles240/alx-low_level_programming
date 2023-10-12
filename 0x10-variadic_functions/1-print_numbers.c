#include "variadic_functions.h"

/**
 * print_numbers - this will print all given numbers with its saparators
 * @separator: separators
 * @n: amount of variable parameter
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;

	va_list num;
	va_start(num, n);

	for(i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);
		printf("%d", x);

		if(i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
	return;
}

