#include <stdio.h>
/**
* main - prints number of arguments
* @argc: number of arguments
* @argv: array of pointers to name of program and arguments
* Return: Always 0 on success.
*/
int main(int argc, char *argv[])
{
int i; // i utilisée dans la boucle for
int argc_dep = argc; // déclarer ces variables pour conserver leur valeurs initiales après la boucle while
int argv_dep = argv; // idem
while (argc--) // décremente le nombre d'arguments restants
printf("%s\n", *argv++); // affiche la valeur de l'arguments et continue
argc = int argc_dep; // redonne les valeurs initiales de argc et argv
argv = int argv_dep;
for (i = 1; i < argc; i++) // tant que i est < au compteur argc, on continue de parcourir
{
printf("%s\n", argv[i]); // affiche les valeurs des arguments du tableau 
}
return (0);
}
