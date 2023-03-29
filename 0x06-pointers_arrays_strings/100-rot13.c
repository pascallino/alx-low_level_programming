#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @n: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *n)
{
int i, j;
char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0'; j++)
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
