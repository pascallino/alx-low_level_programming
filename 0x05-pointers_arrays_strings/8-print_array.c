#include "main.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */
void my_putchar(long var) {
     
    /* print '-' for negative numbers */
    if (var < 0) {
        _putchar('-');
        var = var * -1;
    }
  
    /* Print Zero */
    if (var == 0)
        _putchar('0');
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
 */
    if (var/10)
        my_putchar(var/10);
  
    _putchar(var%10 + '0');
}
  


void print_array(int *arr, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		my_putchar(arr[i]);
		if (i != n - 1)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
