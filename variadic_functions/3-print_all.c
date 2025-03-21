#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_letter - function to recognize letter
 *@arg: the argument in parameter
 *Return: nothing
 */
void print_letter(va_list arg)
{
char letter = va_arg(arg, char);
printf("%c", letter);
}
/**
 * print_flo - function to recognize float
 *@arg: the argument in parameter
 *Return: nothing
 */
void print_flo(va_list arg)
{
double flo = va_arg(arg, double);
printf("%.2f", flo);
}
/**
 * print_number - function to recognize int
 *@arg: the argument in parameter
 *Return: nothing
 */
void print_number(va_list arg)
{
int number = va_arg(arg, int);
printf("%d", number);
}
/**
 * print_str - function to recognize string
 *@arg: the argument in parameter
 *Return: nothing
 */
void print_str(va_list arg)
{
char *str = va_arg(arg, char*);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
 *print_all - function prints all type of format
 *@format: parameter
 *Return: nothing.
  */
void print_all(const char * const format, ...)
{

print type[] = {
{'c', print_letter},
{'i', print_number},
{'f', print_flo},
{'s', print_str},
{'\0', NULL},
};
char *separator = "";
int i = 0;
int j;
va_list arg;
va_start(arg, format);
while (format && format[i])
{
j = 0;
while (type[j].entry)
{
if (format[i] == type[j].entry)
{
printf("%s", separator);
type[j].print_func(arg);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(arg);
printf("\n");
}
