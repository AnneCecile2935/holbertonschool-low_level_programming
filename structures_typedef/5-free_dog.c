#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - function that free struct mem
 *@d: parameter struct
 *Return: nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
