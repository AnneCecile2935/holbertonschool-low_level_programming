#include "main.h"
/**
 * print_triangle - print a triangle
 *@size: parameter function
 * Return: Always 0.
 */
void print_triangle(int size)
{
int c;
int l;
int j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= size; c++)
{
for (l = 1; l <= (size - c); l++)
{
_putchar(' ');
}
for (j = 1; j <= c; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
