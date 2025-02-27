#include "main.h"
/**
*swap_int - swap values between two integers
*@a:first value of parameter
*@b: second value of parameter
*/
void swap_int(int *a, int *b)
{
int temp = *a; // la variable temp permet de stocker temporairement la valeur de a pour ne pas qu'elle soit écrasée une fois le swap fait
*a = *b; 
*b = temp;
}
