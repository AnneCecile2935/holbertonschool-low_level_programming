#include "main.h"
/**
*_strstr - a function that locates a substring
*@haystack: pointer
*@needle: value
*Return: s new value of s.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}
