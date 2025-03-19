#include <ctype.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - function that prints numbers, followed by a new line
 *@separator : parameter for separators
 *@n : parameter if numbers
 *Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *current_word; // pointer to the word
va_list arg; // acceed to the arguments variadic
va_start(arg, n); // initialization to read the arguments
for (i = 0; i < n; i++) // loops for catch the word
{
current_word = va_arg(arg, char*); // each arguments is catch, it is char
if (current_word == NULL) // condition if word is NULL
printf("(nil)");
else
printf("%s", current_word); // print the word
if (i < n - 1 && separator != NULL) // separate each word by separator without the last word (n-1) and if separator is not NULL
printf("%s", separator); // print the separator
}
printf("\n");
va_end(arg); //free va list 
}
