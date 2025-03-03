#include "main.h"
/**
*_memcpy - The _memcpy() function copies n bytes from memory area
*src to memory area dest
*@dest: pointer to memory
*@src: value
*@n: number of bytes to fill
*Return: dest new value.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;
unsigned int i;
for (i = 0; i < n; i++)
{
d[i] = s[i];
}
return (dest);
}
