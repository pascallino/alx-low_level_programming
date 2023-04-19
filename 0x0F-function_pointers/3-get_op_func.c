#include <stdio.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{

	if (s[0] != '+' || s[0] != '/' || s[0] != '-' || s[0] != '%' || s[0] == '*')
	{
return ((s[0] == '+') ? op_add : (s[0] == '-') ? op_sub : (s[0] == '/') ? op_div : (s[0] == '*') ? op_mul : op_mod);

	}
	return (NULL);
}
