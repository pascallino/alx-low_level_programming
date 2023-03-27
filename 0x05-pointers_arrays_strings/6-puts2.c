#include "main.h"
#include <stdio.h>
/**
 * puts2 - print  string
 * @str: pointer parameter a
 * Description: print strings  value
 */

void puts2(char *str)
{
	int i, k;
	int h;

	while (str[i] != '\0')
	{
		i++;
	}
k = 1;
printf("%c", str[0]);
	for (h = 0; h <= i; h++)
	{
		if (h % 2 == 0 && h != 0)
		{
			printf("%c", str[h]);
		}
k++;
	}
	printf("\n");
}

