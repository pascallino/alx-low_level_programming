#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "hello";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
