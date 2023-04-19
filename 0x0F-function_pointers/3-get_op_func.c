#include <stdio.h>
#include "3-calc.h"

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
	int j = 0;

	while (j < 5)
	{
		if (strcmp(s, arithopt[j].opt) == 0)
			return (arithopt[j].f);

		j++;
	}

	return (NULL);
}
