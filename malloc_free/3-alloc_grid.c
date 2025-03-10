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
int ** grid;
int i;
int j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
