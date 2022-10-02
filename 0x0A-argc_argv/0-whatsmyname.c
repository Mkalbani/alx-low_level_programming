#include <stdio.h>

/**
 * main - progrm to prints argument
 *@argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
