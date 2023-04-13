#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2);

int main(int argc, char **argv) 
{
	int i;
	int result;
	char *num1;
	char *num2;
	if (argc != 3) 
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++) 
	{
		if (!isdigit(num1[i])) 
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++) 
	{
		if (!isdigit(num2[i])) 
		{
			printf("Error\n");
			return (98);
		}
	}
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}

int multiply(char *num1, char *num2) {
	int len1, j;
	int len2, i;
	int *result;
	int pos1, pos2, product, sum;
	int final_result;
	len1 = 0;
	len2 = 0;
	while (num1[len1] != '\0') 
	{
		len1++;
	}
	while (num2[len2] != '\0') 
	{
		len2++;
	}
	result = calloc(len1 + len2, sizeof(int));
	for (i = len1 - 1; i >= 0; i--) 
	{
		for (j = len2 - 1; j >= 0; j--) 
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	i = 0;
	while (result[i] == 0) 
	{
		i++;
	}
	final_result = 0;
	for (j = i; j < len1 + len2; j++) 
	
	{
		final_result = final_result * 10 + result[j];
	}
	free(result);
	return (final_result);
}
