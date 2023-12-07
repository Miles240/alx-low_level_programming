#include <stdio.h>
#include "main.h"

/**
 * _abs - Prints absolute values.
 * @i: parameter to be checked
 *
 * Return: 0
 */

int _abs(int i)
{

	if (i < 0)
	{
		i = (-i);
	}
	else
	{
		return (i);
	}
	return (i);
}
