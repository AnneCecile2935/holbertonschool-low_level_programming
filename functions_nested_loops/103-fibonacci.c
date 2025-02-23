#include <stdio.h>
/**
* main - Prints the sum of Even Fibonacci numbers
*less than 40000000.
* Return: Nothing!
*/
int main(void)
{
int i;
long a = 1, b = 2, r = b;
while (b + a < 40000000)
{
b += a;
if (b % 2 == 0)
r += b;
a = b - a;
i++;
}
printf("%ld\n", r);
return (0);
}
