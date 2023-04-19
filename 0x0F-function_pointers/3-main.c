#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: variable
 * @argv: variable
 * Return: value 0
 */
int main(int argc, char *argv[])
{
int t1, t2;
int (*ops)(int, int);
int result;
char *ch, *ch1;

ch = "%";
ch1 = "/";
if ((argc !=  4))
{
	printf("Error\n");
	exit(98);
}

if ((strcmp(argv[2], ch) != 0 || argv[2][0] != '+' || strcmp(argv[2], ch1) != 0 || argv[2][0] != '-' || argv[2][0] != '*' ))
{
printf("Error\n");
exit (99);
}
t1 = atoi(argv[1]);
t2 = atoi(argv[3]);
ops = get_op_func(&argv[2][0]);
result = (*ops)(t1, t2);
printf("%d\n", result);
return (0);
}
