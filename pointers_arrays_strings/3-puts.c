#include "main.h"
/**
*_puts - print a sentence
*@str : string parameters
*/
void _puts(char *str)
{
while (*str != 0) // tant que le pointeur de rencontre pas de zero
{
_putchar(*str); // on affiche la valeur de la chaine
str++; // on continue de lire le suivant
}
_putchar('\n');
}
