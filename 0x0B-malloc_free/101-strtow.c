#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - converts a substring to a pointer array
 * @str: pointer to string
 * Description: string array builder
 * Return: **word
 */
char **strtow(char *str)
{
    char *wordStartAdd;
    int nows;
    char *ptr;
int len;
    char **words;
    int j, word_len, i;

    nows = 0;
    i = 0;
    j = 0;
    ptr = str;
    if (str == NULL || *str == '\0')
        return (NULL);

    while (*ptr != '\0')
    {
        while (*ptr == ' ')
        {
            ptr++;
        }

        if (*ptr != '\0')
        {
            nows++;
        }

        while (*ptr != ' ' && *ptr != '\0')
        {
            ptr++;
        }
    }
    words = calloc(nows + 1, sizeof(char *));
    if (words == NULL)
        return (NULL);

    i = 0;

len = strlen(str) - 1;
while (str[len] == ' ')
{
printf("I am here");
str[len] = '\0';
len--;
}
ptr = str;
    while (*ptr != '\0')
    {
        while (*ptr == ' ')
        {
            ptr++;
        }

        wordStartAdd = ptr;
        while (*ptr != ' ' && *ptr != '\0')
        {
            ptr++;
        }
        word_len = ptr - wordStartAdd;

        words[i] = calloc(word_len + 1, sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(words[j]);
            }
            free(words);
            return (NULL);
        }

        strncpy(words[i], wordStartAdd, word_len);
        words[i][word_len] = '\0';
        i++;
    }
    words[i] = NULL;
    return (words);
}
