#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isalpha(int c)
{
int i;
i = c;
if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
{
return (1);
}
return (0);
}
