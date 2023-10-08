#include "main.h"

/**
 *string_nconcat - allocate a new memory and store the values of
 *s1 and the n bytes of s2
 *@s1: the first string
 *@s2: second string
 *@n: number of byte needed for s2
 *
 *Return: a pointer to a new allocated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, newlen;
	unsigned int d, e;
	char *newStr;

	if (s1 != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
		}
	}
	if (s2 != NULL)
	{
		b = 0;
		while (s2[b] != '\0' && b < n)
		{
			b++;
		}
	}
	newlen = a + b;
	newStr = malloc(sizeof(char) * (newlen + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < a; d++)
	{
		newStr[d] = s1[d];
	}

	{
		for (e = 0; e < b; e++)
		{
			newStr[d + e] = s2[e];
		}
		newStr[d + e] = '\0';

		return (newStr);
	}
}
