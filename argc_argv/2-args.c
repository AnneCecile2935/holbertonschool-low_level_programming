#include <stdio.h>
/**
* main - prints number of arguments
* @argc: number of arguments
* @argv: array of pointers to name of program and arguments
* Return: Always 0 on success.
*/
int main(int argc, char *argv[])
{
int i;
while (argc --)
printf("%s\n", *argv++);
for( i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
