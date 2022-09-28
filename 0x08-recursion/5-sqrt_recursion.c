#include "main.h"

/**
 * _sqrt_recursion - check code.
 * @n: number.
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	int i;

	if ((i * i) == n)
		return (-1);
	else
		return _sqrt_recursion(i);
}

