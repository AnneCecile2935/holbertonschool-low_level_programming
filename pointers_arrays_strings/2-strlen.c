#include "main.h"
/**
*int_strlen - return the lenght of a string
*@s : parameter function
*Return: return the result , the length.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
