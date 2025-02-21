#include <stdio.h>  

/**
* print_to_98 - print numbers to 98
* @n : first number print
*/

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf ("%d, ", n); n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf ("%d, ", n); n--;
}
}
printf ("%d, ", 98);
printf("\n");
}
