#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, a = '0', b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = a; b <= '9'; b++);
		{
			if (i != b)
			{	
				putchar(i);
				putchar(b);
			}
			if (i == b)
			{
				continue;
			}
			if (i == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
