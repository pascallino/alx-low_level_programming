#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int count, i, sum, len;
char *s;

sum = 0;
if ((argc <  2))
{
	printf("0\n");
}
else
{
	for (count = 1; count < argc; count++)
	{
		s = argv[count];
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			if ((isdigit(*(s + i)) == 0))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
}
return (0);
}
