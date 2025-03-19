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
if (n == 0) // check if n==0 print a /n
{
printf("\n");
return;
}
if (separator == 0) // check if separator =0 , print nothing
separator = "";
va_start(arg, n); // initialize to read arguments
for (i = 0; i < n; i++) // loops to cath the number
{
current_number = va_arg(arg, int); // catch the number
printf("%d", current_number); // print the number
if (i < (n - 1) && separator != NULL) // add separator without the last number prints and check is not null
{
printf("%s", separator); // print separator
}
}
printf("\n"); // print /n
va_end(arg); // free va list
}
