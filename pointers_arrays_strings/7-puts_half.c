#include "main.h"
/**
*puts_half - print the second half of a string
*@str : parameter function
*/
void puts_half(char *str)
{
int half;
int i;
int length = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 != 0)
{
half = (length + 1) / 2;
}
else
{
half = length / 2;
}
for (i = half; i < length ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
