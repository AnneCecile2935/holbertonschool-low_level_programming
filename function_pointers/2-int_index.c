#include "function_pointers.h"
#include <stddef.h>
/**
 *int_index - function that searches for an integer
 *@array : pointer to array
 *@size : parameter size of the array
 *@cmp : pointeur cmp
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}

