#include "main.h"
#include <stdio.h>
/**
* print_array - print value of array
*@a:pointer of the array
*@n : number of elements of the array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d",a[i]);
if (i < n-1)
printf(",");
}
printf("\n");
}
