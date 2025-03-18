#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator : parameter for separators
 *@n : parameter if numbers
 *Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int current_number;
va_list arg;
if (n == 0)
{
printf("\n");
return;
}
if (separator == 0)
separator = "";
va_start(arg, n);
for (i = 0; i < n; i++)
{
current_number = va_arg(arg, int);
printf("%d", current_number);
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg);
}
