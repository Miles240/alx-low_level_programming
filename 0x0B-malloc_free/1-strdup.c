#include "main.h"
#include <stdlib.h>

/**
 *
 */

char *_strdup(char *str)
{
	int i;
	char *newStr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	newStr = malloc(sizeof(str) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		newStr[i] = str[i];
	}
	newStr[i] = '\0';
	return (newStr);
}
