#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c, i;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(c);
		}
	_putchar('\n');
}