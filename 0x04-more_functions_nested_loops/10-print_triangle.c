#include "main.h"

/**
 * print_triangle - print certain amount of triangles
 *@size: length of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{

	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= size; b++)
		{
			for (a = size - b; a >= 1; a--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= b; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
