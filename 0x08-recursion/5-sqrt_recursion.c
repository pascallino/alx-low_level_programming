#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int root = 0;
int count = 1;

void setglobal(void)                    {                                       root = 0;;                              }

int _sqrt_recursion(int n)
{
int count = n;
int ans;
int store;

if (root == 0)
{
 root  = n;
 count = 1;
}
if (root <=  0)
{
setglobal();
return (-1);
}
ans = count * count;
if (ans == root)
{
store = count;
setglobal();
        return (count);
}
else if (ans  > root)
{                        
	setglobal();
	return (-1);       
}
else
{
return( _sqrt_recursion(count + 1));
}
setglobal();
return (count);
}
