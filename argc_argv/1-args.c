#include <stdio.h>
/**
* main - prints number of arguments
* @argc: number of arguments
* @argv: array of pointers to name of program and arguments
* Return: Always 0 on success.
*/
int main(int argc, char *argv[])
{
(void)argv; // astuce, on n'utilise pas ici argv car on veut juste le nombre d'arguments
printf("%d\n", argc - 1); // argc -1 car on ne veut pas afficher le nom du programme
return (0);
}
