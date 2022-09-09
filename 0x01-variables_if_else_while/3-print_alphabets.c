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
	int alphabet, ALPHABET;

	alphabet = 'a'
	ALPHABET = 'A'
	while (alphabet > 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
return (0);
}
