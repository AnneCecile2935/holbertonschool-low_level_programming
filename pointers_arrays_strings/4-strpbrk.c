#include "main.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes
*@s: pointer
*@accept: value
*Return: 0.
*/
char *_strpbrk(char *s, char *accept)
{
int c;
int a;
for (c = 0 ; s[c] != '\0'; c++)
{
for (a = 0; accept[a] != '\0'; a++)
{
if (s[c] == accept[a])
{
return (&s[c]);
}
}
}
return (0);
}
