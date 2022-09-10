#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char ch[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
