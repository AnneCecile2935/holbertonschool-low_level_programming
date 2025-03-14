#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*_strlen - return the lenght of a string
*@str : parameter function
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
 * str_concat - function that returns a pointer to a newly allocated in memory
 *which contains a copy of the string givent as a parameter.
 * @s1: parameter of char 1
 *@s2: parameter  of char 2
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
int lens1;
int lens2;
int lensr;
int i;
int j;
char *cpy;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
lens1 = _strlen(s1);
lens2 = _strlen(s2);
lensr = lens1 + lens2 + 1;
cpy = (char *)malloc(lensr);
if (cpy == NULL)
{
return (NULL);
}
for (i = 0; i < lens1; i++)
{
cpy[i] = s1[i];
}
for (j = 0; j < lens2; j++)
{
cpy[lens1 + j] = s2[j];
}
cpy[lensr - 1] = '\0';
return (cpy);
}
