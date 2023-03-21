#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{

	
	long num1, num2;
	long  sum, even;

	
	num1 = 0;
	num2 = 1;
	sum = 0;
	even = 0;
	while (sum < 4000000)
	{
	sum = num1 + num2;
	num1 = num2;
	num2 = sum;
		if (sum % 2 == 0)
		{
			even += sum;
		}
	}
	printf("%ld\n", even);
	return (0);
}
