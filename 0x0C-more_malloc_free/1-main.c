#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    /*concat = string_nconcat("Holberton ", "School !!!", 5);*/
    concat = string_nconcat("Holberton ", NULL, 5);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
