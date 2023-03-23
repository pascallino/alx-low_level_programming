#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isdigit(int c)
{

/* refer int c*/
if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
{
return (1);
}

return (0);
}
