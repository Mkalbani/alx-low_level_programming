#include "main.h"

/**
 * puts_half - check code
 * @str: put string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0, i;


	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
			break;
	}

	if (length % 2 == 1)
	{
		i = length / 2;
	}
	else
		i = (length - 1) / 2;
	for (i++; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
