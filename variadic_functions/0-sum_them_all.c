#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that return the sum of all its parameters
 *@n : fixed parameter
 *Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list arg;
if (n == 0) // check n is not 0 to continue
return (0);
va_start(arg, n); // initialize to read arguments
for (i = 0; i < n; i++) // loop to catch each n 
{
sum += va_arg(arg, int); // sum of n arguments
}
va_end(arg); // free va_list
return (sum); // return result of sum
}
