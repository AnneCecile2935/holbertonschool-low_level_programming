#include <stdio.h>
/**
*main - prints first 50 Fibonaci numbers, starting with 1 and 2, separated by comma followed by a space
* Return : alwyas 0.
*/
int main(void)
{
int i;
unsigned long a = 0, b = 1, r;
for (i = 0; i < 50 ; i++)
{
r = a + b ;
printf("%lu", r);
a = b;
b = r;
if (r == 49)
printf("\n");
else
printf(",");
printf(" ");
}
return (0);
}
