#include "main.h"
/**
 * *_strcpy - copy the string pointed to by src including null byte to dest
*@*dest:destination of copy
*@*str : source of string copy
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
