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
int cents[] = {25, 10, 5, 2, 1};
	int i, k = 0;

if (argc != 2)
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
		for (i = 0; i <= 4; i++)
		{
			while (change >= cents[i])
			{
				change -= cents[i];
			/*	moneyList[k++] = cents[i];*/
				k++;
			}
		}
		/*for (i = 0; i < k; i++)*/
	}
			printf("%d\n", k);
				return (0);
}
