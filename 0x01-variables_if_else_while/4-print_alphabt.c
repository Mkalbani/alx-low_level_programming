#include <stdio.h>

/**
 * main - Entry point
 * description: program prints the alphabet in lowercase
 * without e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'e')
		{
		}
		else
			if (ch == 'q')
			{
			}
			else
				putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
