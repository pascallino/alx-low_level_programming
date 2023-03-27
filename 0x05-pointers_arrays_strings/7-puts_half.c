#include "main.h"
#include <stdio.h>
/**
 * puts_half - print  string
 * @str: pointer parameter a
 * Description: print strings  value
 */

void puts_half(char *str)
{
	int i;
	int h;
	int lastdigit = 0;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		lastdigit = i / 2;
	}
	else
	{
lastdigit = ((i - 1) / 2) + 1;
	}
	for (h = lastdigit; h <= i - 1; h++)
	{
		printf("%c", str[h]);
		lastdigit -= 1;
		if (lastdigit == 0)
		{
			break;
		}
	}
	printf("\n");
}
