#include <stdio.h>

int root = 0;
/**
 *setzero - set zero
 *Description:  function to reset root
 *Return: void
 */
void setzero(void)
{
	root = 0;
}

/**                                          * is_prime_number - Checks if a number is p
rime and returns a number
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */

int is_prime_number(int n)
{
int count;
int loop;

if (n <= 1)
{
	return (0);
}
loop = n;
if (root == 0)
{
root = n;
loop = 2;
}
count = (root - 1) / 2;
if (root % loop == 0)
{
setzero();
return (0);
}
if (loop == count && root % loop != 0)
{
setzero();
return (1);
}
return (is_prime_number(loop + 1));
}
