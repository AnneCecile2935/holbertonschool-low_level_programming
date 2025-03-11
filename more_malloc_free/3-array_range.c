#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int size;
size_t total_size;
if (min > max)
return (NULL);
size = max - min + 1;
total_size = (sizeof(int) * size);
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
