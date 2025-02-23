#include "main.h"
/**
* print_times_table - create a time table to 0 to 15.
*@i : first value
*@j : second value
*@product: result of product i * j
*/
void print_times_table(int n)
{
int i;
int j;
int product;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j > 0) {
_putchar(',');
_putchar(' ');
}
if (product < 10) {
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(product +'0');
}
else if (product < 100) {
_putchar(' ');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else {
_putchar(' ');
_putchar((product / 100) +'0');
_putchar(((product / 10) % 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
}
