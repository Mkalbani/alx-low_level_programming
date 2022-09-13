#include "main.h"

/**
 * _islower - function to check lowercase character
 * @c - is the int use for argument of function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
