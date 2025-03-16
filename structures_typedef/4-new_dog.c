#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - create a new struct
 *@name: parameter struct
 *@age:parameter
 *@owner:parameter
 *Return: dog, pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog; //pointeur vers la struture dog_t qui va contenir les infos de dog
name_len = 0; //  longueur name
owner_len = 0; // longueur owner
dog = (dog_t *)malloc(sizeof(dog_t)); // aloocation de mémoire structure
if (dog == NULL)
return (NULL);
while (name[name_len] != '\0') // calcul longueur de name
name_len++;
dog->name = malloc(sizeof(char) * (name_len + 1)); //allocation de mémoire pour name
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < name_len; i++) // on copie chaque caract de name dans dog -> name et la valeur nulle
{
dog->name[i] = name[i];
dog->name[i] = '\0';
}
while (owner[owner_len] != '\0')
owner_len++;
dog->owner = malloc(sizeof(char) * (owner_len + 1));
if (dog->owner == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < owner_len; i++)
{
dog->owner[i] = owner[i];
dog->owner[i] = '\0';
}
dog->age = age;
return (dog);
}
