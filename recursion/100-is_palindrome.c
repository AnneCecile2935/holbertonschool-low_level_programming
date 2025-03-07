#include "main.h"
/**
*is_palindrome - a function that returns 1 if a string is a palindrome
*and 0 if not
*@s: parameter for string
*Return:1
*/
int is_palindrome_p(char *s, int debut, int fin)
{
if (debut >= fin)
{
return (1);
}
if (s[debut] != s[fin])
{
return (0);
}
return is_palindrome_p(s, debut + 1, fin -1 );
}
int is_palindrome(char *s)
{
int length = 0;
if (*s == '\0')
{
return (1);
}
 
 if (*s != '\0')
   {
     length++;
     length += is_palindrome(s+1);
   }
return is_palindrome_p(s, 0, length - 1);
}
