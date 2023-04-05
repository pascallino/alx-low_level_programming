#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
    r = is_palindrome("abcdecba");
    printf("%d\n", r);
    r = is_palindrome("jbcddcba");       printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
