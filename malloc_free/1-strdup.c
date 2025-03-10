#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*_strlen - return the lenght of a string
*@s : parameter function
*Return: return the result , the length.
*/
int _strlen(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
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
/**
 * _strdup - function that returns a pointer to a newly allocated in memory
 *which contains a copy of the string givent as a parameter.
 * @str: parameter of char
 * * Return: ptr
 */
char *_strdup(char *str)
{
unsigned int len = _strlen(str) + 1;
char *cpy = malloc(len);
if (str == NULL)
{
return (NULL);
}
if (cpy == NULL)
{
return (NULL);
}
_memcpy(cpy, str, len);
return (cpy);
}
