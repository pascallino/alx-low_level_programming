#include "main.h"
/**
 * rev_string - reverse  string 
 * @c: pointer parameter a
 * Description: reverse  value
 */

void rev_string(char *c)
{
	int i;
	int h = 0;
while (c[h] != '\0')
{
h++;
}
	for (i = h - 1; i >= 0; i--)
{
_putchar(c[i]);
}
_putchar('\n');
}
int main(void)
{
	char *s = "my school";
rev_string(s);
return (0);
}
