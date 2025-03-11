#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function concat two strings
 *@s1 : first string
 *@s2: second string
 *@n: number of caractere copy
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cpy;
unsigned int lens1 = 0;
unsigned int lens2 = 0;
unsigned int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[lens1] != '\0')
lens1++;
while (s2[lens2] != '\0')
lens2++;
if (n >= lens2)
{
n = lens2;
}
cpy = malloc (sizeof(char) * (lens1 + n + 1));
if (cpy == NULL)
return (NULL);
for (i = 0; i < lens1; i++)
{
cpy[i] = s1[i];
}
for (j = 0; j < n; j++)
{
cpy[i + j] = s2[j];
}
cpy [i + j] = '\0';
return (cpy);
}
