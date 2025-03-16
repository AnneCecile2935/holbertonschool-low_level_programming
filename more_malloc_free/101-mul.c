#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_digits - Vérifie que la chaîne ne contient que des chiffres
 * @s: la chaîne à vérifier
 * Return: 1 si valide, 0 sinon
 */
int check_digits(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * print_result - Affiche le tableau d'entiers en ignorant les zéros initiaux
 * @res: tableau résultat
 * @size: taille du tableau
 */
void print_result(int *res, int size)
{
int i = 0;
while (i < size && res[i] == 0)
i++;
if (i == size)
putchar('0');
else
{
for (; i < size; i++)
putchar(res[i] + '0');
}
putchar('\n');
}
/**
 *main - Multiplie deux grands entiers positifs passés en arguments
 *@argc : paramter
 *argv: parameter
 *Return: 0
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, i, j, *result;
if (argc != 3 || !check_digits(argv[1]) || !check_digits(argv[2]))
return (printf("Error\n"), 98);
num1 = argv[1], num2 = argv[2];
len1 = strlen(num1), len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));
if (!result)
return (1);
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int p1 = i + j, p2 = i + j + 1;
int sum = mul + result[p2];
result[p2] = sum % 10;
result[p1] += sum / 10;
}
}
print_result(result, len1 + len2);
free(result);
return (0);
}
