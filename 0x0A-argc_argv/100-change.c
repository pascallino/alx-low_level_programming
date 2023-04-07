#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 * Return: value 0
 */
int main(int argc, char *argv[])
{int change;
	int i, k = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
		printf("0\n");
	else
	{
		change = atoi(argv[1]);
		while (change >= 1)
		{
			if (change % 10 == 7 || change % 10 == 9)
				change -= 2;
			else if (change % 25 == 0)
				change -= 25;
			else if (change % 10 == 0)
				change -= 10;
			else if (change % 5 == 0)
				change -= 5;
			else if (change % 2 == 0)
				if (change % 10 == 6)
				{
					change -= 1;
				}
				else
				{
					change -= 2;
				}
			else
				change -= 1;

		k++;
	}
		printf("%d\n", k);
}
return (0);
}
