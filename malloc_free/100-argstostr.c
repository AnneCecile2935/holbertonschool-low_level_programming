#include "main.h"
#include <stdlib.h>
/**
 *argstostr - function concat arguments with \n
 *@ac : number of arguments
 *@av : arguments
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
int i = 0;
int j = 0;
int k = 0;
int len = 0;
char *result;
if (ac == 0 || av == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
result = malloc(sizeof(char) * (len + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[k++] = av[i][j];
}
result[k++] = '\n';
}
result[k] = '\0';
return (result);
}
