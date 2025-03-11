#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function create an array of integer
 *@min: parameter min
 *@max: parameter max
 *Return:ptr pointeur
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(size * sizeof(int*));
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
