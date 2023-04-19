#include <stdio.h>
#include "3-calc.h"
#include "string.h"

/**
  * get_op_func - get opt func 
  * @s: character 
  *
  * Return: function 
  */

int (*get_op_func(char *s))(int, int)
{
op_to arithopt[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	for(;i < 5; i++)
	{
		if (strcmp(s, arithopt[i].opt) == 0)
			return (arithopt[i].f);
	}

	return (NULL);
}
