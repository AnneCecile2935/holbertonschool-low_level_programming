#include "main.h"
#include <string.h>
/**
* puts2 - print another character of a string
*@str: parameter function
*/
void puts2(char *str)
{
int len = 0;
while (len >= 0)
{
if (str[len] == '\0')
{
_putchar('\n');
break;
}
if (len % 2 == 0)
_putchar(str[len]);
len++;
}
}
