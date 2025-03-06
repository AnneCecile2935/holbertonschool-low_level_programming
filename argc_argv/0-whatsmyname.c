#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
while (argc--) //decremente le compteur d'arguments argc
printf("%s\n", *argv++); // affiche le premier argument et les suivant tant que argc n'est pas = à 0
return (0);
}
