#include "main.h"
/**
 * puts2 - print  string
 * @str: pointer parameter a
 * Description: print strings  value
 */

void puts2(char *str)
{
	int i;
	int h;

	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	for (h = 0; h < i; h++)
	{
		if (h % 2 == 0)
		{
			printf("%c", str[h]);
		}
		h++;
	}
	printf("\n");
}

