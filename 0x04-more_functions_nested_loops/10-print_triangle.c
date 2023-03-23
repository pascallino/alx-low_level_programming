#include "main.h"

/**
 * print_traingle - Entry point
 * Description: checks is a character is u
ppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_triangle(int c)
{  
    int size = c;

if (!(c <= 0))
{
    for(int i = 1; i <= size; i++)
    {
for(int j = 1; j <= size - i ; j++)
        {
                _putchar(' ');
        }
	for(int k = 1; k <= i ; k++)
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
