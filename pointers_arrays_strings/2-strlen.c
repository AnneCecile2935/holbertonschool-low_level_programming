#include "main.h"
/**
*_strlen - return the lenght of a string
*@s : parameter function
*Return: return the result , the length.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0') // tant que le tableau n'a pas de valeur nulle
{
len++; // on compte la longueur du tableau
}
return (len); // on retourne la longueur du tableau
}
