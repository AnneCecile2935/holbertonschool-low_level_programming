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
char *current_word;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
current_word = va_arg(arg, char*);
if (current_word == NULL)
printf("(nil)");
else
printf("%s", current_word);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
