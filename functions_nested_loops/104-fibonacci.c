#include <stdio.h>
int main(void)
{
unsigned long a = 1, b =2, r, i, c =98;
printf("%lu, %lu", a, b);
for (i = 2; i < c; i++)
{
r = a + b;
printf(", %lu", r);
a = b;
b = r;
}
printf("\n");
return (0);
}
