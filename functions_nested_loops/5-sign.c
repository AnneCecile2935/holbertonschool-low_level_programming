#include "main.h"
/**
* print_sign - check is a number is positive or not.
* @n : the number to be chekcked.
* Return: 1 if it is positive, 0 is it is 0, -1 if it is negative.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
