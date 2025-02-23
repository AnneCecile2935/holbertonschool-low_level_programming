#include <stdio.h>
int main(void)
{
  unsigned int a = 1, b =2, r, i;
unsigned int c = 98;
  for (i = 2; i < c; i++)
    {
      r = a +b;
      printf(", %u", r);
      a = b;
      b = r;
    }
  printf("\n");
return (0);
}
