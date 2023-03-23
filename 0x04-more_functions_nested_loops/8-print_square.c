#include "main.h"

/**
 * print_square - Entry point
 * Description: checks is a character is u
ppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_square(int c)
{  
    int size = c;

if (!(c <= 0))
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
                _putchar('#');
        }
        _putchar('\n');
    }
}
    else 
    {
    _putchar('\n');
    }
}
