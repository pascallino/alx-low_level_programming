#include <stdio.h>

/**
 * main - Entry point
 * Description: fizzbuzz
 * Return: 0
 */

int main(void)
{
	int a;

	printf("%d ", 1);
	for (a = 2; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
			continue;
		}
		if (a % 3 == 0)
		{
			printf("%s ", "Fizz");
			continue;
		}
		if (a % 5 == 0)
		{
			if (a == 100)
			{
				printf("%s", "Buzz");
				continue;
			}
			else
			{
				printf("%s ", "Buzz");
				continue;
			}
		}
		printf("%d ", a);
	}
	printf("%c", '\n');
	return (0);
}
