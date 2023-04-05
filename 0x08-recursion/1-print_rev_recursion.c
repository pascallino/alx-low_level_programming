#include "main.h"
#include <string.h>

void print(int len, char *s);
/**
 * _print_rev_recursion - Prints all string in reverse.
 * @s: The string to be printed. im the function
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	s = s + (len - 1);

print(len, s);
}
/**
 * print- Prints all string in reverse.
 * @s: The string to be printed. im the function
 * @len: length of strimg
 * Description: print reverse
 */

void print(int len, char *s)
{
int length = len;

if (*s)
{
_putchar(*s);
print(length, s - 1);
}

}
