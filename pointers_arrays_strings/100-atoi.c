#include "main.h"
/**
* _atoi - convert a string to an integer
* @s: parameter of function
*Return: result of convert
*/
int _atoi(char *s)
{
unsigned int res = 0;
int sign = 1;
while (*s == ' ' || *s == '\t' || *s == '\n')
s++;
while (*s == '+' || *s == '-' || *s == ' ')
{
if (*s == '-')
sign = -sign;
s++;
}
while (*s)
{
if (*s >= '0' && *s <= '9')
{
res = res * 10 + (*s - '0');
}
else if (res > 0)
{
break;
}
s++;
}
return (res *sign);
}

