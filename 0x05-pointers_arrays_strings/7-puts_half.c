#include "main.h"

/**
 * puts_half - check code
 * @str: put string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, length;
	char n;

	n = (length_of_the_string - 1) / 2;

	for (i = 0; i >= n; i++)
	{
		if (str[i] % 2 == 1)
		{
			break;
		}
	_putchar(str[i]);
	_putchar('\n');
}
