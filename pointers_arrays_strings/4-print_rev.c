#include "main.h"
/**
*_rev - print a sentence in reverse
*@str : string parameters
*/
void print_rev(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
while (len > 0)
{
len--;
_putchar(str[len]);
}
_putchar('\n');
}
