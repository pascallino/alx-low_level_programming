#ifndef _HEADER_
#define _HEADER_

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * struct opt - Struct opt object
 *
 * @opt: The operator for calculation
 * @f: The function associated
 */
typedef struct opt
{
	char *opt;
	int (*f)(int x, int y);
} op_to;
int (*get_op_func(char *s))(int, int);

#endif /* 3_CALC_H */
