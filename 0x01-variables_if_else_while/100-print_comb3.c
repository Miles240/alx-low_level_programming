#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int n, z;

	for (n = 48; n <= 56; n++)
	{
		for (z = 49; z <= 57; z++)
		{
			if (z > n)
			{
				putchar(n);
				putchar(z);
				if (n != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
