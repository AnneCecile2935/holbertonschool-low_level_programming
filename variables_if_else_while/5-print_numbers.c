#include <stdlib.h>
#include <time.h>
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
int i;
for (i = 0; i < 10 ; i++)
{
	printf("%d", i);
}
putchar('\n');
return (0);
}
