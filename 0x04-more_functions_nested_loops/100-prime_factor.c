#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	long int num;

	num = 612852475143;
	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	printf("%d", count - 1);
	printf("\n");
	return (0);
}
