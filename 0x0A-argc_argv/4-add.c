#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for ALX
 * Description: argc argv[]
 * @argc: count
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int count, sum;

	sum = 0;
	if ((argc <  2))
	{
		printf("0\n");
	}
else
{
	for (count = 1; count < argc; count++)
	{
		if ((isdigit(*(argv + count)) == 0))
		{
			printf("Error\n");
		return (1);
		}

	}
		for (count = 1; count < argc; count++)
		{
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
}
	return (0);
}
