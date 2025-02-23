#include <stdio.h>
/**
* main - Prints all possible combinations of three different digits,
*        in ascending order, separated by a comma followed by a space.
* Return: Always 0.
*/
int main(void)
{
int digit1;
int digit2;
for (digit1 = 0 ; digit1 <= 99; digit1++)
{
for (digit2 = digit1 + 1 ; digit2 <= 99; digit2++)
{
putchar ((digit1 / 10) + '0');
putchar ((digit1 % 10) + '0');
putchar (' ');
putchar ((digit2 / 10) + '0');
putchar ((digit2 % 10) + '0');
if (digit1 != 99 || digit2 != 99)
  {
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
