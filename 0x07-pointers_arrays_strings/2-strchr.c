#include "main.h"

/**
 * _strchr - check code
 * @s: string
 * @c: character
 * Return: pointer to s, or NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)

		if (*s == c)
			return (s);
	return (0);
}
