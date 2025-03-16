#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
int *ptr; // pointeur vers le tableau qu'on va créer
int i;
int size; // le nombre d'éléments du tableau
size_t total_size; // la taille du tableau donc taille de la mémoire à allouer
if (min > max)
return (NULL);
size = max - min + 1; // nombres d'élements du tableau par exemple de 6 à 2 = 6-2+1 = 5
total_size = (sizeof(int) * size); // taille de mémoire suffisante pour le nbre d'éléement
ptr = malloc(total_size); // allocation de la mémoire
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++) // 
{
ptr[i] = min + i; // on remplit le tableau en allant de min à max en commençant par min 
}
return (ptr);
}
