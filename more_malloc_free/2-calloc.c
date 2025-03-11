#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function calloc to initialize
 *@nmemb: parameter nb of elements
 *@size: size of elements
 *Return:void *ptr pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total;
char  *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
total = nmemb * size;
ptr = malloc(total);
if (ptr == NULL)
return (NULL);
for (i = 0; i < total; i++)
{
ptr[i] = 0;
}
return ((void *)ptr);
}
