#include "main.h"

/**
 * _strstr - check code
 * @s: string
 * @c: character
 * Return: pointer to s, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (needle);
		}
		haystack++;
	}
	return ('\0');
}
