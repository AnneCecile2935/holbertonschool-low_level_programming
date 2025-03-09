#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*is_number - prints number of arguments
*@str: parameter
* Return: Always 0 on success.
*/
int is_number(char *str)
{
int i = 0;
if (str[i] == '\0') // si i est nulle return 0
return (0);
while (str[i]) //continue
{
if (!isdigit(str[i])) // si i n'est pas un chiffre
return (0); // return 0
i++; // continue de parcourir
}
return (1); //retourne un pour tous les autres cas
}
/**
*main - prints number of arguments
*@argc:parameter counter arguments
*@argv:parameter array of arguments
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int sum = 0, i;
for (i = 1; i < argc; i++) // pour i < au nombre d'arguments
{
if (!is_number(argv[i])) // est-ce que c'est un nombre valide
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]); // ajoute la valeur de l'arg à somme
}
printf("%d\n", sum); // affiche la somme
return (0);
}
