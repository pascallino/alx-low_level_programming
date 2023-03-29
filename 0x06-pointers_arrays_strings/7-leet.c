#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @n: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *n)
{

int i, j;

char s1[] = "aAeEootTIL";
char s2[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
break;
}
}
}
return (n);
}
