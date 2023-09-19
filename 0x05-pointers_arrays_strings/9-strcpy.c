#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description:copy the string pointed to by pointer to the buffer pointed
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;

		dest[n] = src[n];
	} while (src[n] != '\0');
	return (dest);
}
