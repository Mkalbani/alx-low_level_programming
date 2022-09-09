#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: This program will print
 * the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	putchar("alphabet in lowercase:\n")
	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
	}
	printf("\n");
return (0);
}
