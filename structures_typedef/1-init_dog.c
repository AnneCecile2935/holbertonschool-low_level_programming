#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - function initialize variable of struct
 *@d: parameter struct
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL) // par sécurité on vérifie que le pointeur travaille avec une vraie structure en mémoire
d = malloc(sizeof(struct dog)); // on créer l'allocation de mémoire pour la nouvelle structure
d->name = name; // reçoit l'adresse de la chaine name
d->age = age; //  la valeur age
d->owner = owner; // reçoit la valeur de la chaine owner
}
