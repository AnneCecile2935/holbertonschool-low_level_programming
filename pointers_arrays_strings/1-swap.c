#include "main.h"
/**
*swap_int - swap values between two integers
*@a:first value of parameter
*@b: second value of parameter
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
