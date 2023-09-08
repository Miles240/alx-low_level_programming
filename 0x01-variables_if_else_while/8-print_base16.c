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

	for (i = 0x30; i <= 0x39; i++)
		putchar(i);
	for (n = 0x61; n <= 0x66; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
