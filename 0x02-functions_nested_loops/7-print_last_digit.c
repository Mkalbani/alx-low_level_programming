#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: prints last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int num, d;
	int d = num % 10;

	if (d > 0)
		_putchar(d);
	_putchar('\n');
	return (n);
}
