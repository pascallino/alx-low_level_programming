#include <stdio.h>

void __attribute__((constructor)) intro_func(void);

void intro_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
