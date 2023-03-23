#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int count;
long long int num;

num = 612852475143;
/*printf("\nPrime Factors of %lld are ..\n", num);*/
    for(count = 2; num > 1; count++)
    {
        while(num % count == 0)
        {
        /*    printf("%d ", count); */
            num = num / count;
        }
    }
    printf("%d ", count-1);
    printf("\n");
    return (0);
}
