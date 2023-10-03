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

		newStr = malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
	{
		newStr[i] = str[i];
	}
	newStr[i] = '\0';
	return (newStr);
}
