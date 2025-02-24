#include "main.h"
/**
* print_square - print # in diagonal
* @size : parameter of function
* Return: Always 0.
*/
void print_square(int size)
{
int x;
int y;
for (x = 1; x <= size ; x++)
{
for (y = 1; y < x; y++)
{
_putchar ('#');
}
_putchar ('#');
 _putchar('\n');
 }
 _putchar ('\n');
}
