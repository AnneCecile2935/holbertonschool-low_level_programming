#include "main.h"
/**
*_puts - print a sentence
*@str : string parameters
*/
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
