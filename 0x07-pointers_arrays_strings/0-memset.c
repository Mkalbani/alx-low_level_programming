#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	
	Return (s);
}
