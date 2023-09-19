#include "main.h"
/**
* print_rev - this is a function that prints the string 'char' in reverse.
* @s:the string reference pointer
* Return: 0
*/

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
