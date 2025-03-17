#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 *main - function main
 *@argc: number of elements
 *@argv: pointer to elements
 *Return: 0.
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int calc;
int (*operator)(int, int);
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if ((op[0] == '/' || op[0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
operator = get_op_func(op);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
calc = operator(num1, num2);
printf("%d\n", calc);
return (0);
}
