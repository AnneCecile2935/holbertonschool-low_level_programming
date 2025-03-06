#include "main.h"
/**
*factorial - a function that returns the factorial of a given number
*@n: value
*Return:factorial
*/
int factorial(int n)
{
if (n < 0) // si n < 0 return -1
{
return (-1);
}
if (n <= 1) // pour n<=1 return -1
{
return (1);
}
return (n * factorial(n - 1)); // pour tous les autres nombre, n * facteur de n-1
}
