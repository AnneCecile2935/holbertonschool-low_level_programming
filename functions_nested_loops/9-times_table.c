#include "main.h"
/**
* times_table - create a time table
*/
void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10; j++)
{
r = i * j;
if (j == 0)
{
_putchar ('0');
}
else
{
_putchar (',');
_putchar (' ');
if (r > 9)
{
_putchar((r / 10) + '0');
}
else
{
_putchar (' ');
}
_putchar ((r % 10) + '0');       
}
}
_putchar ('\n');
}
}
