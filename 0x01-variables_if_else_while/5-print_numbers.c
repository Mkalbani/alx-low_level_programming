#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print all single
 * digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
