#include <stdio.h>
/**                                        * times_table - Entry point               * Description: prints a-z                 * Return: 0
*/


int main(void)
{

        int i;
        i = 1;
	long sum;

        while (i <= 1023)
        {
                if (i % 3 == 0)
{
	sum +=i;
}
                else if (i % 5 == 0)
                {
		sum+=i;
                }
                i++;
        }
	printf("%ld\n", sum);
        return (0);
}
