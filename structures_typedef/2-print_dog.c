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
if (d->name == NULL) // on vérifie que la name n'est pas nul pour éviter un crash à l'affichage, idem pour owner
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
