#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *_strcpy - function that copy a string
 *@src: parameter struct
 *Return: dest, pointer
 */
void free_dog(dog_t *d)
{
if( d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
