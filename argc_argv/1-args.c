#include <stdio.h>
/**
* main - prints number of arguments
* @argc: number of arguments
* @argv: array of pointers to name of program and arguments
* Return: Always 0 on success.
*/
int main(int argc, char *argv[])
{
  (void)argv;
printf("%d\n", argc - 1);
return (0);
}
