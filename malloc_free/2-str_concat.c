#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that returns a pointer to a newly allocated in memory
 *which contains a copy of the string givent as a parameter.
 * @s1: parameter of char 1
 *@s2: parameter  of char 2
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
int lens1 = 0;
int lens2 = 0;
int i;
int j;
char *cpy;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[lens1]) // compter la longuer de la chaine s1
  lens1++;
  while (s2[lens2]) // compter la longuer de la chaine s2
    lens2++;
cpy = (char *)malloc(lens1 + lens2 +1); // allouer la mémoire pour s1+s2
if (cpy == NULL)
return (NULL);
for (i = 0; i < lens1; i++) // copier s1 dans copie
{
cpy[i] = s1[i];
}
for (j = 0; j < lens2; j++)
{
cpy[lens1 + j] = s2[j]; // copier s2 à la suite de S1 dans la copie
}
cpy[lens1 + lens2] = '\0'; // ajouter la valeur nulle fin de la copie
return (cpy);
}
