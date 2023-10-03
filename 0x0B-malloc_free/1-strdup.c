#include "main.h"
#include <stdlib.h>

/**
 *
 */

char *_strdup(char *str)
{
	int i, len;
	char *newStr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{}

		newStr = malloc((len) * sizeof(char));

	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		newStr[i] = str[i];
	}
	newStr[len] = '\0';
	return (newStr);
}
