#include "main.h"
/**
* _atoi - convert a string to an integer
* @res: result of lecture
* @s: parameter of function
* @sign: sign of integer 
*Return: result of convert
*/
int _atoi(char *s)
{
int res = 0;
int sign = 1;
while (*s == ' ' || *s == '\t' || *s == '\n')
s++;
while (*s == '+' || *s == '-' || *s == ' ')
{
if (*s == '-')
sign = -sign;
s++;
}
while (*s >= '0' && *s <= '9')
{
res = res*10 + (*s - '0');
s++;
}
return (res * sign);
}
