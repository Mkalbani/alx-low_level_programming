#include "main.h"
#include <string.h>

/**
 * _strcat - check code
 * @dest: appends
 * @src: appends
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(src);

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] == '\0';

	return (0);
}
