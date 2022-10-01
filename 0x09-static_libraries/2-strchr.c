#include "main.h"

/**
 * _strchr - check code
 * @s: string
 * @c: character
 * Return: pointer to s, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
