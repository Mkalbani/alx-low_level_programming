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


	for (i = 0; i >= length / 2; i++)
	{
		if (str[i] % 2 == 1)
		{
			break;
		}
	_putchar(str[i]);
	}
	_putchar('\n');
}
