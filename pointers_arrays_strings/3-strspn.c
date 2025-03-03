#include "main.h"
/**
*_strspn - a function that gets the length of a prefix substring
*@s: pointer where we seach the prefix
*@accept: pointer where the string has characters searching
*Return: s new value of s.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int j; // indice pour la chaine s
unsigned int i; // indice pour la chaine accept
for (j = 0 ; s[j]; j++) // boucle parcourt la chaine s en vérfiiant si s est diff de \0
{
for (i = 0; accept[i]; i++) //boucle parcout chaine accept en vérifiant si caract actuel de s est dans la chaine accept
{
if s[j] == accept[i] // si c'est le cas, la boucle d'arrête 
break;
}
if accept[i] == '\0') // toute la chaîne a été parcourue sans trouver de correspondance
break;
}
return (j); // retourne la valeur de j (nb de carct du début chaine s présents dans chaine accept
}
