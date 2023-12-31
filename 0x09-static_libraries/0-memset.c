#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - function fills the first n byte of the memory with a value
 *@n: bytes of the memory area pointed to by @s
 *@s: this is the constant byte
 *@b: memory area pointer
 *
 * Return: a pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
