#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - function that free a 2 dimensionnal grid previously created by
 *your alloc_grid function
 *@grid: parameter
 *@height: parameter
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++) // on parcourt chaque ligne tu tableau
{
free(grid[i]); // on libère chaque ligne du tableau
}
free(grid); // on lièbere le tableau
}
