#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y value
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
int  result = x;
int count = y;

if (count >= 1)
{
result = result * _pow_recursion(x, y - 1);
return (result);
}
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}

return (result);
}
