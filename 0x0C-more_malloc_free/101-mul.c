#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void multiply(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: count
 * @argv: vector array
 * Description: entry
 * Return: 0
 */
int main(int argc, char **argv)
{
    char *num1;
    char *num2;
    int i;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    num1 = argv[1];
    num2 = argv[2];
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (!isdigit(num1[i]))
        {
            printf("Error\n");
            return (98);
        }
    }
    for (i = 0; num2[i] != '\0'; i++)
    {
        if (!isdigit(num2[i]))
        {
            printf("Error\n");
            return (98);
        }
    }
    multiply(num1, num2);
    return (0);
}

/**
 * multiply - muls two numbers
 * Description: print mul result
 * @num1: 1
 * @num2: 2
 * Return: void
 */
void multiply(char *num1, char *num2)
{
    int len1, j;
    int len2, i;
    int *result;
    int pos1, pos2, product, sum;

    len1 = 0;
    len2 = 0;
    while (num1[len1] != '\0')
    {
        len1++;
    }
    while (num2[len2] != '\0')
    {
        len2++;
    }

    if (len1 == 1 && num1[0] == '0' || len2 == 1 && num2[0] == '0') 
{
        printf("0\n");
        return;
    }

    result = calloc(len1 + len2, sizeof(int));
    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0');
            pos1 = i + j;
            pos2 = i + j + 1;
            sum = product + result[pos2];
            result[pos1] += sum / 10;
            result[pos2] = sum % 10;
        }
    }
    i = 0;
    while (result[i] == 0)
    {
        i++;
    }
    for (j = i; j < len1 + len2; j++)
    {
        _putchar(result[j] + '0');
    }
    free(result);
    _putchar('\n');
}
