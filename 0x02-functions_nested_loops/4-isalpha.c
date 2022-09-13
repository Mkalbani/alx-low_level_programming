#include "main.h"

/**
 * _isalpha - function to check lowercase character
 * @c - is the int use for argument of function
 *
 * Return: 1 otherwise returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
