#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array : pointer to array
 *@size : parameter size of the array
 *@cmp : pointeur cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
