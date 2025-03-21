#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 *main - function main
 *@argc: number of elements
 *@argv: pointer to elements
 *Return: 0.
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int calc;
int (*operator)(int, int); // définir le pointeur sur fonction
char *op; // définir un pointeur char
if (argc != 4) // verifier que les parametres en entrée sont bon (il en faut 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]); // convertir le premier num doit être convertit en char avec atoi argv 
op = argv[2]; // chercher l'oprateur avec un pointeur op via argv
num2 = atoi(argv[3]); // convertir le deuxième num via argv
if ((op[0] == '/' || op[0] == '%') && num2 == 0) // faire une boucle if si l'opérateur est / ou % et que le num2 == 0 
{
printf("Error\n"); // imprimer error
exit(100);
}
operator = get_op_func(op); // appel du pointeur de fonction operator
 if (operator == NULL) // s(il est NULL
{
printf("Error\n"); // afficher erreur 
exit(99);
}
calc = operator(num1, num2); // calculer le résultat
printf("%d\n", calc); // affciher le résultat
return (0);
}
