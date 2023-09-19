#include "main.h"

/**
*_puts - this function will print the string
*@str: pointer to the sring
*Return: string followed by a new line
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
