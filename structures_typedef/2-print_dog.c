#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - function that prints a struct dog
 *@d: parameter struct
 *Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age == 0.0)
printf("Age: (nil)\n");
else
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
