#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
*malloc_checked -Write a function that allocates memory using malloc.
*@b : parameter function
*Return: ptr.
*/
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
