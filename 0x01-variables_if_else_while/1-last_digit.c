#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints output
 * Return: 0
 */
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

	/* your code goes there */
if (m < 6)
{
printf("Last digit of %d is %d and its less than 6 and not 0\n", n, m);
}
else if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is 0 and its %d \n", n, m);
}
return (0);
}
