#include "main.h"
/**
*string_toupper - convert lowercase in uppercase
*@str: pointer to string
*Return: return str after convert
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= ('a' - 'A');
}
ptr++;
}
return (str);
}
