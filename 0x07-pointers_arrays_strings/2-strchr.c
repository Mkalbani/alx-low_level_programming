#include "main.h"

/**
 * _strchr - check code
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)

		if (*s == c)
			return (s);
	return (0);
}
