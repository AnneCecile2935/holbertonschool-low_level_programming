#include "main.h"
/**
 * print_last_digit - return last digit of number
 * Return: value of the last digit.
 */
int print_last_digit(int i)
{
  int j;
  j = i % 10;
  if (j < 0)
    {
      j = -j;
    }
  _putchar (j + '0');
  _putchar ('\n');
  return (0);
  }
