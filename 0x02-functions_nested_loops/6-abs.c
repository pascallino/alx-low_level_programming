#include "main.h"
#include <stdio.h>
/**
 * _isabs - Entry point
 * Description: checks for abeolute value
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return(1 * -1);
	}
	return (0);
}
int main(void)
{
	return (0);
}
