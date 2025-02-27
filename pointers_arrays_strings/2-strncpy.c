#include "main.h"
/**
*_strncpy - copy one string in another string
*@dest: parameter of function destination
*@src: parameter of function entry
*@n: parameter of byted
*Return: result of concat
*/
char *_strncpy(char *dest, char *src, int n) // on veut copier src à la suite de dest. n est le nombre de caracteres dans src
{
char *ptr = dest; // je déclare un pointeur vers la chaine dest
while (*src != '\0' && n > 0) // tant que la chaine src n'est pas nulle ou qu'il reste des caractères à parcourir
{
*ptr = *src; // je renvoie les caracteres de src à dest par mon pointeur ptr
ptr++; // je continue a parcourir la chaine src avec mon pointeur 
src++; // je continue de parcourir la chaine src
n--; // je decremente mon compteur de caracteres
}
while (n > 0) // tant que n >0, il reste des caractères a ecrire
{
*ptr = '\0'; // on remplit le reste de la chaine avec des caracteres nuls pour eviter des bugs
ptr++;
n--;
}
return (dest); // on retourne la "nouvelle" chaine dest.
}
