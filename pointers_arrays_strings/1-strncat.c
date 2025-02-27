#include "main.h"
/**
*_strncat - concat two string
*@dest: parameter of function destination
*@src: parameter of function entry
*@n: parameter of byted
*Return: result of concat
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest; // on déclare le pointeur vers la chaine dest, il va parcourir la chaine dest
while (*ptr != '\0') // Tant que le pointeur ne trouve pas de valeur nulle, il continue à parcourir la chaîne
{
ptr++;
}
while (*src != '\0' && n > 0) // tant que la chaine src n'est pas nulle ou qu'il y a toujours des caractères à parcourir
{
*ptr = *src;  // on copie les caractères trouvés dans src à dest par le pointeur ptr
ptr++; // le pointeur pointe vers le prochaine caractère
src++; // le pointeur src pointe vers le prochain caractère de la chaine src
n--; // decremente le nombre de caractere qu'il reste à compter
}
*ptr = '\0'; // on met un caractère nul à la fin de la chaine
return (dest); // on retourne le pointeur vers la chaine des qui contient maintenant tous les caractères copiés
}
