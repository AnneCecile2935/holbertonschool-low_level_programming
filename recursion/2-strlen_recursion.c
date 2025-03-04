#include "main.h"
/**
*-strlen_recursion - a function that prints a string in reverse
*@s: pointer
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
