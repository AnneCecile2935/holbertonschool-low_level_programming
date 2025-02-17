#include <stdio.h>
/**
 * main - print a sentence
 * Return: 0
 *Sizeof: size of type
 */
int main(void)
{
printf("Size of a char : %s octets \n", sizeof(char));
	printf("Size of an int:%u octets \n", sizeof(int));
printf("Size of a long int: %ld octets \n", sizeof(long int));
printf("Size of a long long int:%lld octets \n", sizeof(long long int));
printf("Size of a float: %f octets \n", sizeof(float));
return (0);
}
