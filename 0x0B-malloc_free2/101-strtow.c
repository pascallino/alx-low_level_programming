#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char **strtow(const char *str) {
	const char *wordStartAdd;
	int nows;
const char *ptr;
	char **words;
	int word_len;
	int j;
	int i;

	j = 0;
	nows = 0;
	i = 0;
/*set the string to ptr pointer */  
 ptr = str;
/* dereference ptr & transverse character by character: this loop counts total  words in the string  */
    while (*ptr != '\0') 
    {
/*keep skipping the leading spaces*/
        while (*ptr == ' ') 
	{
            ptr++;
        }
/*Count this word if we're not at the end of the string, add 1 to indicate you have arrived at the start of a word*/
        if (*ptr != '\0') 
	{
            nows++;
        }
        // Advance to the next word
        while (*ptr != ' ' && *ptr != '\0') 
	{
            ptr++;
        }
    }

    // Allocate an array of pointers to store the words
    words = (char **) malloc(nows * sizeof(char *));
    if (words == NULL) 
    {
        return NULL;
    }

    /* Copy each word into a new dynamically allocated string*/
    i = 0;
    ptr = str;
    while (*ptr != '\0') 
    {
        // Skip any leading spaces
        while (*ptr == ' ') 
	{
            ptr++;
        }
        // Store the address of the current word
        wordStartAdd = ptr;
        // Find the end of the current word
        while (*ptr != ' ' && *ptr != '\0') {
            ptr++;
        }
        // Allocate memory for the current word
        word_len = ptr - wordStartAdd;
        words[i] = (char *) malloc((word_len + 1) * sizeof(char));
        if (words[i] == NULL) {
/* Free previously allocated memory and return NULL if it  fails*/
            for (j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        // Copy the current word into the newly allocated memory
        strncpy(words[i], wordStartAdd, word_len);
        words[i][word_len] = '\0';
        i++;
    }

    return words;
}

