#include <stdio.h>

void __attribute__((constructor)) intro_func(void);
/**
 * intro_func - runs before main function is executed.
 */

void intro_func(void)
{
printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
