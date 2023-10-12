#include "variadic_functions.h"

/**
 * print_strings - prints the given strings with separators
 * @separator: given separators
 * @n: amount of string to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
