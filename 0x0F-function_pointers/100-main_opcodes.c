#include <stdlib.h>
#include <stdio.h>

/**
 * main - print opcodes
 * @argc: argument
 * @argv: array
 * Return: 0 on success, 1 or 2 otherwise
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
