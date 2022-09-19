#include "main.h"

/**
 * swap_int - check code.
 * @a:first integer to he swapped
 * @b: second integer to be swapped.
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
