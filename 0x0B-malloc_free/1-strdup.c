#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0, len = 0;

	str2 = malloc(sizeof(char) * (len + 1));
	if (str == 0 || str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
		len++;
	}
	str2[len] = '\0';
	return (str2);
}
