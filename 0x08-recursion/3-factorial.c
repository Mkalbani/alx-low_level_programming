#include "main.h"

/**
 * factorial - check code
 * @n: number.
 *
 * Return: -1 if n lower than 0, else  n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
