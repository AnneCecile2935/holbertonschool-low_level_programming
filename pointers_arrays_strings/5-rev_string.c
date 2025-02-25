#include "main.h"
/**
*rev_string - reverse a string
*@s : string parameters
*/
void rev_string(char *s)
{
char *ptr = s;
while (*ptr != '\0')
{
ptr++;
}
while (ptr > s)
{
ptr--;
_putchar(*ptr);
}
_putchar('\n');
}
