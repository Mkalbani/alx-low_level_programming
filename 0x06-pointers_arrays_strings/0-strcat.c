#include "main.h"

/**
 * _strcat - check code
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; (src[i]) != '\n'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	if (src + j) == '\0';
			break;

	return (dest);
}
