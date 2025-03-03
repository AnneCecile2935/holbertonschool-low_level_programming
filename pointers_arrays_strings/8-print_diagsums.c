#include <stdio.h>
#include "main.h"
/**
*print_diagsums - a function that prints the sum of the two diagonals
*of a squre matrix og integers.
*@a: pointer
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
  int sum_1 = 0;
  int sum_2 = 0;
  int i;
  for (i = 0; i < size; i++)
    {
      sum_1 += a[i*size +i];
      sum_2 += a[i*size + (size -1 -i)];
    }
  printf("%d, %d\n", sum_1, sum_2);
	 }
