#include "main.h"

/**
 * _strlen_recursion - check code
 * @s: string
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		return (1 +_strlen_recursion(s + 1));
	}
	return (len);

}
