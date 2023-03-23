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
if (c >= 0 && c <= 9)
{
return (1);
}

return (0);
}
/**
 * main - Entry point
 * Description: checks is a character is u
ppercase
 * Return: 0                               */
int main(void)
{                                             int r;

    r = _isdigit(5);
    _putchar(r + '0');                        r = _isdigit(9);                        _putchar(r + '0');
    r = _isdigit(65);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
