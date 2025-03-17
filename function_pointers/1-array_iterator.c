#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i ;
  if (array == NULL || action == NULL)
    return NULL;
  
  for (i = 0; i < size; i++)
    {
      array[i] = action(i);
    }
  action(array[i])
    
