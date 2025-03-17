#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - function to addition
 *@a : int a
 *@b: int b
 *Return: a +b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - function to substrate
 *@a : int a
 *@b: int b
 *Return: a - b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - function to multipliate
 *@a : int a
 *@b: int b
 *Return: a *b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - function to division
 *@a : int a
 *@b: int b
 *Return: a /b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(98);
}
return (a / b);
}
/**
 *op_mod - function to modulo
 *@a : int a
 *@b: int b
 *Return: a %b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(99);
}
return (a % b);
}
