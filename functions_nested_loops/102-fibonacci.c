#include <stdio.h>
/**
* main - Prints the first 52 fibonacci numbers
*
* Return: Nothing!
*/
int main(void)
{
int i;
unsigned long a = 0, b = 1, r;
for (i = 0; i < 50 ; i++)
{
r = a + b;
printf("%lu", r);
a = b;
b = r;
if (i < 49)
{
printf(",");
printf(" ");
}
}
printf("\n");
return (0);
}
