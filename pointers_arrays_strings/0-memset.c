#include "main.h"
/**
*_memset - The _memset() function fills the first n bytes of the memory
*area pointed to by s with the constant byte b
*@s: pointer to memory
*@b: value
*@n: number of bytes to fill
*Return: new value of s.
*/
char *_memset(char *s, char b, unsigned int n)
{
char *str = s;
unsigned int i;
for (i = 0; i < n; i++)
{
str[i] = (unsigned char)b;
}
return (s);
}
