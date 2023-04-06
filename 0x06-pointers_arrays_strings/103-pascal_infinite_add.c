#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

int d = -1;
int i = 0;
int cnt = 0;
int global;
int exec = 0;
char *r2;
void  divisor(int  var)
{
if (i <= 99)	
{

		i++;

		//printf("%d", i);
	

		//if ( var < 10 )
		//{
		//}
//if ((var / 10) > 0)
              //  divisor(var / 10);
       r2[i] = ((var % 10) + '0');
}
}


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int cnt1, cnt2;
int ctrak;
unsigned int sum = 0;
cnt1 = 0;
cnt2 = 0;
ctrak = 0;
r2 = r;
while (n1[cnt1] != '\0')
{
	if (!(n1[cnt1] >= 0 && n1[cnt1] <= '9'))
	{
		ctrak = 1;
	}
cnt1++;
}
while (n2[cnt2] != '\0')
{
if (!(n2[cnt2] >= 0 && n2[cnt2] <= '9'))            {                                               ctrak = 1;                      }
	cnt2++;
}


if (cnt1 <= size_r  && ctrak == 0 && cnt1 == cnt2)
{
while (1)
{
	sum = ( n1[cnt] - '0') + (n2[cnt] - '0');
if (i >= 99)
{
	break;
}
if (sum >= 10)
{
		i++;
		r2[i] = 1 + '0';

		//r2[0] = 1;
	

//	printf("%d %d", r2[i], i);
 divisor(sum);
	//r2[i] = global;
}else
{

i++;                                    
//printf("%d", i);
r2[i] =sum + '0';
}
//printf("%d", r2[i]);
cnt++;
}
int p = 0;
while(p <= 99)
{
printf("%c", r2[p]);
*(r + p) = r2[p];
p++; //
}
//r = r2;
*(r + 100) = '\0';
printf("\n\n%c", *(r + 100));
return (r);
}
else
{
	return (0);
}

}
