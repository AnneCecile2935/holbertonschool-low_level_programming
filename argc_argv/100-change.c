#include <stdio.h>
#include <stdlib.h>
/**
 *main - function principal
 *@argc: counter of arguments
 *@argv: number of arguments
 *Return : always 0
 */
int main(int argc, char *argv[])
{
int centimes;
int piece[] = {25, 10, 5, 2, 1};
int num_piece;
int i;
if (argc != 2)
  {
printf("Error\n");
return (1);
  }
centimes = atoi(argv[1]);
if (centimes < 0)
  {
    printf("0\n");
return (0);
  }
num_piece = 0;
for (i=0;i < 5; i++)
{
num_piece += centimes / piece[i];
centimes %= piece[i];
 }
printf("%d\n", num_piece);
return (0);
}
