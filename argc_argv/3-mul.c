#include <stdio.h>
#include <stdlib.h>
/**
* main - prints number of arguments
* @argc: number of arguments
* @argv: array of pointers to name of program and arguments
* Return: Always 0 on success.
*/
int main(int argc, char *argv[])
{
int r;
int a;
int b;
if (argc != 3) // 3 pour le nombre d'arguments min attendus ([0], [1], [2]
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]); // les valeurs entrées sont des chars, il faut les convertir en int pour a et b
b = atoi(argv[2]);
r = (a *b);
printf("%d\n", r);
return (0);
}
