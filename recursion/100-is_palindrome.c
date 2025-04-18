#include "main.h"
/**
*is_palindrome_p - a function.
*@debut : parameter debut chaine
*@fin :parameter fin chaine
*Return:is_palindrome_p
*@s: parameter for string
*Return : is_palindrome
*/
int is_palindrome_p(char *s, int debut, int fin);
int string_length(char *s);
int is_palindrome(char *s);
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
return (is_palindrome_p(s, debut + 1, fin - 1));
}
/**
*string_length - function length of string
*@s: parameter
*Return: string_length.
*/
int string_length(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + string_length(s + 1));
}
/**
*is_palindrome - a function that returns 1 if a string is a palindrome
*and 0 if not
*@s: parameter for string
*Return: is_palindrome.
*/
int is_palindrome(char *s)
{
int length;
if (*s == '\0')
{
return (1);
}
length = string_length(s);
return (is_palindrome_p(s, 0, length - 1));
}
