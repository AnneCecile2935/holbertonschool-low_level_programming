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
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
return NULL;
}
return ptr;
}
