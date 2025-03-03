#include "main.h"
/**
*_strspn - a function that gets the length of a prefix substring
*@s: pointer
*@accept: value
*Return: s new value of s.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int j;
unsigned int i;
for (j= 0 ;*(s + j); j++)
{
for ( i = 0; *(accept + i); i++)
{
if (*(s + j) == *(accept + i))
break;
}
if (*(accept + i) == '\0')
break;  
}
return (j);
}
