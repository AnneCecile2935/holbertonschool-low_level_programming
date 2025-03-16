#include <stdlib.h>
#include "main.h"
/**
 *_realloc - function to reallocate memory
 *@ptr: poiter to the old size
 *@old_size: parameter
 *@new_size:parameter
 *Return: new size pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *old_ptr = (char *)ptr;
char *new_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < new_size && i < old_size; i++)
new_ptr[i] = old_ptr[i];
free(ptr);
return (new_ptr);
}
