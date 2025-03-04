#include "main.h"
/**
*_sqrt_recursion - a function that returns the natural square root of number
*@n: parameter
*Return:_sqrt_recursion
*/
int _sqrt_recursion(int n)
{
int a = 0;
if( n < 0)
return (-1);
if (a *a == n)
{
return (a);
}
else if (a * a > n)
{
return (-1);
}
 return(_sqrt_recursion(a + 1));
}
