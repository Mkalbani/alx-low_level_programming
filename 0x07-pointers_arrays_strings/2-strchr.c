#include "main.h"

/**
 * _strchr - check code
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (; c != '\0'; c++)

		if (s == c)
			return (s);
	else
		return (0);
}
