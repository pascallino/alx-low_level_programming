#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count the array
 * @argv: array vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	unsigned char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	code = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", code[i]);
	}
	printf("\n");
	return (0);
}
