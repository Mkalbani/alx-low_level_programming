#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: put string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
