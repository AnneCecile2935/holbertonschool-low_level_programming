#include "main.h"
/**
*_strlen_recursion - a function that prints the length of string
*@s: pointer
*Return: _strlen_recursion
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
