#include <stdio.h>

/**
 * main - progrm to prints argument count
 *@argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", --argc);

	return (0);
}
