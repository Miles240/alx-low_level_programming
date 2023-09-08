#include <stdio.h>

/**
*main - Entry point
*
*Return: 0
*/

int main(void)
{

	int n;
	int i;
	int j;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i > n && j > i)
				{
					putchar(n);
					putchar(i);
					putchar(j);
					if (n != 55 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
