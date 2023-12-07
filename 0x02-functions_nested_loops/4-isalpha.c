#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if the input is uppercase and returns 1.
 * @c:parameter to be checked.
 *
 * Return: 0
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
