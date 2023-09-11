#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int i;
	int n;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
