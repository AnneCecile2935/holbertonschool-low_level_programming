#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *main function assigns a random number to n
 *Prints n.
*
* Return: always 0 (success)
*/
/* betty style doc for function main goes there */

int main(void)
{
int num;
for (num = 0; num < 16 ; num++)
{
if (num < 10)
putchar(num + '0');
else
putchar(num - 10 + 'A');
}
putchar('\n');
return (0);
}
