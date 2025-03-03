#include "main.h"
/**
*strchr - a function that locates a character in a string.
*@s: pointer
*@c: value
*Return: new value of s.
*/
char *_strchr(char *s, char c)
{
const void *NULL = 0;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return ((char *)&s[i]);
}
i++;
if (c == '\0')
{
return ((char *)&s[i]);
}
}
 return ((char *)NULL);     
}
