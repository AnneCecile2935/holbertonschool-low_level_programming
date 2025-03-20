#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - function that prints numbers, followed by a new line
 *@separator : parameter for separators
 *@n : parameter if numbers
 *Return: nothing.
 */
/**
 * print_letter - function to recognize letter
 *@arg: the argument in parameter
 *@va_list: parameter list
 *Return: nothing
 */
print_letter(va_list,arg)
{
char letter = va_arg(arg, int);
printf("%c", letter);
}
/**
 * print_flo - function to recognize float
 *@arg: the argument in parameter
 *@va_list: parameter list
 *Return: nothing
 */
print_flo(va_list, arg)
{
double flo = va_arg(arg, double);
printf("%.2f",flo);
}
/**
 * print_number - function to recognize int
 *@arg: the argument in parameter
 *@va_list: parameter list
 *Return: nothing
 */
print_number(va_list, arg)
{
int number = va_arg(arg, int);
printf("%d", number);
}
/**
 * print_str - function to recognize string
 *@arg: the argument in parameter
 *@va_list: parameter list
 *Return: nothing
 */
print_str(va_list, arg)
{
if (str == NULL)
printf("(nil)");
char str = va_arg(arg, int);
printf("%s", str);
}
void print_all(const char * const format, ...)
{
  va_list arg;
  va_start(arg, format);
  while (*format !='\0')
    {
      
}
