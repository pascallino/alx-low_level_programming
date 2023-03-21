#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: Always (Success)
 */

int main(void)
{
	int i;
	long sum;

	i = 1;
	while (i <= 1023)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
