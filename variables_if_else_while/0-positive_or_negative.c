#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/** main - Entry point
 * main function assigns a random number to n.
 * Prints n.
 *
 *Return: always 0 (succes)*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
