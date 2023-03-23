#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 * Description: checks is a character is uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isupper(int c)
{
int i = 'A';

for (i = 'A'; i <= 'Z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}

/**
 * main - Entry point
 * Description: checks is a character is u
ppercase
 * Return: 0
 */
int main(void)
{
    int r;

    r = _isupper('h');
    _putchar(r + '0');
    r = _isupper('W');
    _putchar(r + '0');
    r = _isupper(65);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}



