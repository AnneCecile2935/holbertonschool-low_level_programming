#include "main.h"
/**
*_strncpy - copy one string in another string
*@dest: parameter of function destination
*@src: parameter of function entry
*@n: parameter of byted
*Return: result of concat
*/
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}
return (dest);
}
