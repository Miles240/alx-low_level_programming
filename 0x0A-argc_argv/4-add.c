#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument coun
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total += num;
			}
		}
		printf("%d\n", total);
	}

	return (0);
}
