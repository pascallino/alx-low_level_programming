#include "main.h"

/**                                        * print_diagonal - Entry point
 * Description: checks is a character is u
ppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_diagonal(int c)
{  
    int size = c;

if (!(c <= 0))
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(j == i)
                _putchar('\\');
            else
                _putchar(' ');
        }
        _putchar('\n');
    }
}
    else 
    {
    _putchar('\n');
    }
}
