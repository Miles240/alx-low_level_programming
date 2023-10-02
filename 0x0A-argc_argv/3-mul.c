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
	int total = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		total *= atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
