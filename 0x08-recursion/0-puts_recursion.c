#include "main.h"

/**
 * _puts_recursion - check code
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	i	_putchar ('\n');
	else
		_putchar(*s);
		_puts_recursion(s + 1);

}
