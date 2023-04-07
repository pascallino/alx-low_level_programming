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
{int cnt;
	int notnum;
	int change;
int cents[] = {25, 10, 5, 2, 1};
	int moneyList[100];
	int i, k = 0;

	notnum = 0;
	if (argc < 2 &&  (argc >  0) && isdigit(*(argv[1])) == 0)
	{
		printf("Error\n");
		return (1);
	}
	for (cnt = 1; cnt < argc; cnt++)
	{
		if ((isdigit(*(argv[cnt])) == 0))
		{
			notnum = 1;
		}
	}
	if (notnum == 1 || atoi(argv[1]) < 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		for (i = 0; i <= 4; i++)
		{
			while (change >= cents[i])
			{
				change -= cents[i];
				moneyList[k++] = cents[i];
			}
		}
		/*for (i = 0; i < k; i++)*/
	}
	notnum = moneyList[0];
			printf("%d\n", k);
				return (0);
}
