#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int change;
	int i, k = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		change = atoi(argv[1]);
			while (change >= 1)
			{
			if (change >= 25)
				change -= 25;
			else if (change >= 10)
				change -= 10;
			else if (change >= 5)
				change -= 5;
			else if (change >= 2)
				change -= 2;
			else
				change -= 1;

					k++;
			}
printf("%d\n", k);
	}
	return (0);
}
