#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src);

/**
 * *_strdup - A function that duplicates a string and returns a pointer tona new address of the same string with a null ref.
 * @src: input string to duplicate
 * Return: NULL if str == NULL
 */

char *_strdup(char *src)
 {
  char *dst;
/*printf("old address is = %p\n", src); */
  dst = malloc(strlen (src) + 1);  
  /*  Space for length plus null*/
if (dst == NULL) 
	return (NULL); 
/*  No memory return null*/
/* strcpy(dst,src);     */      
/* Copy the characters */
return (_strcpy(dst, src));
/* Return the new string*/
}

/**
 * _strcpy - copys a string from src to destination
 * @dest: destination
 * @src: src pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
