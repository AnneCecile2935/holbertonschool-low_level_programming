#include "main.h"
/**
* more_numbers - function that prints numbers from 0 to 14 10 times.
* Return:0.
*/
void more_numbers(void)
{
char i;
char j = 0;
while (j <= 9)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) +'0');
}
_putchar((i % 10) +'0');
}
_putchar('\n');
j++;
}
}
