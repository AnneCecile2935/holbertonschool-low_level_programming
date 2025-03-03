#include "main.h"
/**
*_memset - The _memset() function fills the first n bytes of the memory
*area pointed to by s with the constant byte b
*@s: pointer to memory
*@b: value
*@n: number of bytes to fill
*Return: new value of s.
*/
char *_memset(char *s, char b, unsigned int n)
{
char *str = s; // pointe vers s
unsigned int i;
for (i = 0; i < n; i++) // parcourt toutes les itérations
{
str[i] = (unsigned char)b; // on accède à chaque élément du tableau ou de la zone mémoire à partir de str
} // la valeur b est convertie en usigned char pour être sur qu'elle soit traitée en octet
  // chaque élément de la mémoire est rempli avec la valeur b.
return (s);
}
