#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code for ALX
 * Description: argc argv[]
 * @argc: count
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int count, isnum, isonlyalpha, sum;

	isnum = 0;
	isonlyalpha = 0;
	sum = 0;
	if ((argc <  3))
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		if ((isdigit(*(argv[count])) == 0))
		{
			isonlyalpha = 1;
		}
		if ((isdigit(*(argv[count])) != 0))
		{
			isnum = 1;
		}
	}
	if (isonlyalpha == 1 && isnum == 0)
	{
		printf("0\n");
		return (0);
	}
	else if (isonlyalpha == 1 && isnum == 1)
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
