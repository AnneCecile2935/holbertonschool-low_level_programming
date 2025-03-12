#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *_strcpy - function that copy a string
 *@src: parameter struct
 *Return: dest, pointer
 */
char *_strcpy(const char *src)
{
char *dest;
int i = 0;
int len = 0;
while (src[len] != '\0')
len++;
dest = malloc(sizeof(char) * (len + 1));
if (dest == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 *new_dog - create a new struct
 *@name: parameter struct
 *@age:parameter
 *@owner:parameter
 *Return: dog, pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = _strcpy(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = _strcpy(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
