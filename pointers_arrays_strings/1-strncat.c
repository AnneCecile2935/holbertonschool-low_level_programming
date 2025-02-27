#include "main.h"
/**
*_strncat - concat two string
*@dest: parameter of function destination
*@src: parameter of function entry
*@n: parameter of byted
*Return: result of concat
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';
return (dest);
}
