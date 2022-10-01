#include "main.h"

/**
 * _strlen-check code.
 * @s:returns the length of a string.
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
