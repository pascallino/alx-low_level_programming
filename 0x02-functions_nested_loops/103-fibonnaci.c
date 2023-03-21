#include <stdio.h>                        /**                                        * times_table - Entry point               * Description: print fibonnaci
 * Return: 0
*/


int main(void)
{

        int x, y;
       int  i; 
       long num1, num2;
       long  sum, even;
       i = 1;
       num1 = 0;
       num2 = 1;
       sum = 0;
even = 2;
       while (sum < 4000000)
        {
sum = num1 + num2;
num1 = num2;                              num2 = sum;
if (sum % 2 == 0)
{
	even += sum;
}
        }
        printf("%ld\n", even);
        return (0);
}
