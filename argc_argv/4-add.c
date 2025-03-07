#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints number of arguments
*
* is_number - function
* @str: parameter
* Return: Always 0 on success.
*/
int is_number(char *str)
{
int i = 0;
if (str[i] == '\0')
return (0);
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}
int main(int argc, char *argv[])
{
int sum = 0, i;
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
