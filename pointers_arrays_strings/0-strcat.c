#include "main.h"
/**
*_strcat - concat string
*@dest: parameter of function destination
*@src: parameter of function entry
*Return: result of concat
*/
char *_strcat(char *dest, char *src)
{
int i = 0; // pour parcourir la chaine dest
int j = 0; // pour parcourir la chaine src
while (dest[i] != '\0') // chercher à se positionner à la fin de la chaine
{
i++;
}
while (src[j] != '\0') // tant que la chaine src n'est pas nulle
{
dest[i] = src[j]; // je copie les caracteres de la chaine src dans la chaine dest 
i++; // continue d'incrementer la chaine dest avec les caracteres trouves dans src
j++; // continue de parcourir la chaine src
}
dest[i] = '\0'; // je termine par mettre une valeur nulle à la fin de la chaine dest
return (dest); // je retourne la nouvelle valeur de dest
}
