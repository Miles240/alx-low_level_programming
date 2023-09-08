#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101)
			continue;
		else if (i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
