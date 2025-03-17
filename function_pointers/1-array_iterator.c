#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i ;
  for (i = 0; i < size; i++)
    {
      array[i] = array_iterator(action);
    }
  action(array[i])
    
