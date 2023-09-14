#include "main.h"

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
			continue;
		}
		printf("%d ", i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
