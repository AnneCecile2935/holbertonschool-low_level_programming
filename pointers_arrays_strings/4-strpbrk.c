#include "main.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes
*@s: pointer
*@accept: value
*Return: 0.
*/
char *_strpbrk(char *s, char *accept)
{
int c;
int a;
for (c = 0 ; s[c] != '\0'; c++) // le pointer parcourt la chaine s tant qu'il ne tombe pas sur la fin de la chaine
{
for (a = 0; accept[a] != '\0'; a++) // pour chaque caract e la chaine s parcouru, on cherche un caract identique dans la chaine accept
{
if (s[c] == accept[a]) // si c'est le cas
{
return (&s[c]); // on retourne l'adresse du caractère correspondant trouvé dans s
}
}
}
return (0);
}
