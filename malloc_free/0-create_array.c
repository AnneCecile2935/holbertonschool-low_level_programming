#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - funnction that create an array of char initialized with char
 * @c: parameter of char
 * @size: the size of the memory to print
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = NULL;
if (size == '\0')
{
return (NULL);
}
if (size != '0')
{
array = (char *)malloc(size * sizeof(char));
}
if (array != NULL)
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
return (array);
}
