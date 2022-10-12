#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguments
 * @argv: array
 * Return: 0 on success, 1 or 2 otherwise
 */

int main(int argc, char *argv[])
{
	unsigned char *f;
	int i = 0, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = (unsigned char *) main;
	bytes = atoi(argv[1]);
	for (; i < bytes; i++)
	{
		printf("%02x", *(f + i));
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
