#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - return the lenght of a string a pointer to 2 dimensionnal array
*integer
*@width : parameter function
*@height: parameter function
*Return: return the result , the length.
*/
int **alloc_grid(int width, int height)
{
int **grid; // double pointer tableau 2D
int i;
int j;
if (width <= 0 || height <= 0) // vérifier si width et height ne sont pas nulles
{
return (NULL);
}
grid = malloc(height * sizeof(int *)); // allocation mémoire pour height lignes
if (grid == NULL) // verifier que c'est pas nul
{
return (NULL);
}
for (i = 0; i < height; i++) // on alloue de la mémoire colonne pour chaque ligne height
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++) // si l'alllocation fail, on libère
free(grid[j]); // toutes les lignes déjà allouées
free(grid); // on libère le tableau
return (NULL);
}
for (j = 0; j < width; j++) // pour chaque allocation de mémoire
grid[i][j] = 0; // initialisation de chaque element à 0
}
return (grid);
}
