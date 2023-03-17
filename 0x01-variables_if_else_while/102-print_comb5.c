#include <stdio.h>
#include <unistd.h>
/**
 * main - Entyr point
 * Description: prints two digits combination
 * Return: Always.  0 (success)
 */
int main(void)
{
int a, b, c, i;

for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{

if (((c + i) > (a + b) &&  c >= a) || a < c)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(i);

if (c == '9' && i == '8' && a == '9' && b == '9')
{
break;
}
if (!(c == '9' && i == '8' && a == '9' && b == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar((char) '\n');
return (0);
}

