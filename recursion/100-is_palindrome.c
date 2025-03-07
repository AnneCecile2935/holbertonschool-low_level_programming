#include "main.h"
/**
*is_palindrome - a function that returns 1 if a string is a palindrome
*and 0 if not
*@s: parameter for string
*Return:1
*/
int is_palindrome(char *s)
{
const char *end = s;
while (*end)
end++;
end--;
while (s < end)
{
if (*s != *end)
return (0);
s++;
end--;
}
return (1);
}
