#include "main.h"
/**
*is_prime_number - a function that returns 1 if the input is a prime number,
*also 0.
*@n: parameter for number
*Return:is_prime_number
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
if (n % 2 == 0)
return (0);
return (prime(n, 3));
}
/**
*prime - function for calculate square root of number
*@n : paramter for number
*@a : paramter
*Return: sqrt_square
*/
int prime(int a, int n)
{
if (a * a > n)
return (1);
if (n % a == 0)
return (0);
return (prime(n, a + 2));
}
