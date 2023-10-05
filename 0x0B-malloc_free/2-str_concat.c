#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, tLen, i, n;
	char *newStr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	tLen = len1 + len2;

	newStr = (char *)malloc((tLen + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		newStr[i] = s1[i];
	}
	for (n = 0; n < len2; n++)
	{
		newStr[i + n] = s2[n];
	}

	newStr[tLen] = '\0';

	return (newStr);
}
