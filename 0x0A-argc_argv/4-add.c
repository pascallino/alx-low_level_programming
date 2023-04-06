#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for ALX School student
 * Description: argc argv[]
 * @argc: count
 * @argv: vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;
	int isnotnum;
	int sum;

	isnotnum = 0;
	sum = 0;
	if ((argc <  2))
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		if ((isdigit(*(argv[count])) == 0))
		{
			isnotnum = 1;
		}

	}
	if (isnotnum == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{

		for (count = 1; count < argc; count++)
		{
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
