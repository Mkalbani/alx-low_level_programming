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

	length = string_length(s);
	n = (length_of_the_string - 1) / 2;

	for (i = 0; i >= length / 2; i++)
	{
		if (str[i] % 2 == 1)
		{
			break;
		}
	_putchar(str[i]);
	_putchar('\n');
}
