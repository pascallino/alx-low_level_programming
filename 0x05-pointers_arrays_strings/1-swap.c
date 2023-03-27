#include "main.h"
/**
 * swap_int - swap the a value to b
 * @a: pointer parameter a
 * @b: variable b
 * Description: change pointer value
 * Return: void
 */

void swap_int(int *a, int *b)
{

int swap = *a;
*a = *b;
*b = swap;
}
