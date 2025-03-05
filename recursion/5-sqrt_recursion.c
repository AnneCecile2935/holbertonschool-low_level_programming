#include "main.h"
/**
*_sqrt_recursion - a function that returns the natural square root of number
*sqrt_square - function for calculate square root of number
*@n: parameter
*Return:_sqrt_recursion
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_square(n, 0));
}
int sqrt_square(int n, int a)
{
if (a * a == n)
return (a);
if (a * a > n)
return (-1);
return (sqrt_square(n, a + 1));
}
