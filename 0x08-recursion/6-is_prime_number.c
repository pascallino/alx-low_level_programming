#include <stdio.h>

int prime(int n, int loop);

/**
 * is_prime_number - Checks if a number is prime and returns a number
 * @n: The number to be checked.
 * Description: Prime number
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */

int is_prime_number(int n)
{
return (prime(n, 2));
}

/**
 * prime - set prime
 * @n: n varable
 * @loop: loop var
 * Description:  function to reset root
 * Return: prime
 */

int prime(int n, int loop)
{
	int count;
	int root;

if (n <= 1)
{
	return (0);
}
/* loop = n; */
root = n;
count = (root - 1) / 2;
if (root % loop == 0)
{
return (0);
}
if (loop == count && root % loop != 0)
{
return (1);
}
return (prime(root, loop + 1));
}
