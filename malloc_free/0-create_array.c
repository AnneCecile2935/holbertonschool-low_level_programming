#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - funnction that create an array of char initialized with char
 * @c: parameter of char
 * @size: the size of the memory to print
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i; // declare variable compteur pour la boucle for
char *array = NULL; // retour du pointeur vers le tableau NULL
if (size == 0) // si la taille est 0
{
return (NULL); // retour NULL
}
if (size != 0) // si la taille n'est pas nulle
{
array = (char *)malloc(size * sizeof(char)); // allocation de la mémoire de taille size x sizeof char
}                                             // retourne le pointeur vers le bloc mémoire du tableau
if (array != NULL) // si l'allocation de mémoire est réussie
{
for (i = 0; i < size; i++) // on initialise si la variable est inférieure à la taille
{
array[i] = c; // on initialise le tableau avec la valeur char spécifique c 
}
}
return (array); //retourne le pointeur vers le tableau alloué et initialisé
}
