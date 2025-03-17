#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - function main
 *@argc: number of elements
 *@argv: pointer to elements
 *Return: 0.
 */
int main(argc, *argv[])
{
int num1;
int num2;
int calc;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
char *op = argv[2];
num2 = atoi(argv[3]);
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
