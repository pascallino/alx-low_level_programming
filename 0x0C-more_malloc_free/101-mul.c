#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2);

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    char *num1 = argv[1];
    char *num2 = argv[2];
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }
    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }
    int result = multiply(num1, num2);
    printf("%d\n", result);
    return 0;
}

int multiply(char *num1, char *num2) {
    int len1 = 0;
    while (num1[len1] != '\0') {
        len1++;
    }
    int len2 = 0;
    while (num2[len2] != '\0') {
        len2++;
    }
    int *result = calloc(len1 + len2, sizeof(int));
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int pos1 = i + j;
            int pos2 = i + j + 1;
            int sum = product + result[pos2];
            result[pos1] += sum / 10;
            result[pos2] = sum % 10;
        }
    }
    int i = 0;
    while (result[i] == 0) {
        i++;
    }
    int num_digits = len1 + len2 - i;
    int final_result = 0;
    for (int j = i; j < len1 + len2; j++) {
        final_result = final_result * 10 + result[j];
    }
    free(result);
    return final_result;
}
