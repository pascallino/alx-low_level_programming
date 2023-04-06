#include <stdio.h>

/**
 * main - check the code for ALX School student
 * Description: argc argv[]
 * @argc: count
 * @argv: vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc >= 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
