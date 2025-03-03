#include "main.h"
/**
*_strchr - a function that locates a character in a string.
*@s: pointer
*@c: value
*Return: s new value of s.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
s++;
}
if (*s == c)
return (s);
else
return (0);
}
