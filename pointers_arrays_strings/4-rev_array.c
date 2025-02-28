#include "main.h"
/**
*reverse_array - convert lowercase in uppercase
*@a: pointer to string
*@n : number of array
*/
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + (n -1);
while (start < end)
{
int temp = *start;
*start = *end;
*end = temp;
start ++;
end --;
}
}
