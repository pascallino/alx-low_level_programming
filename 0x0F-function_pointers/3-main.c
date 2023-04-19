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
	char *op;

	if ((argc !=  4))
	{
		printf("Error\n");
		exit(98);
	}
	t1 = atoi(argv[1]);
	t2 = atoi(argv[3]);
	op = argv[2];
	if ((*op == '/' && t2 == 0) || (*op == '%' && t2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ops = get_op_func(argv[2]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*ops)(t1, t2);
	printf("%d\n", result);
	return (0);
}
