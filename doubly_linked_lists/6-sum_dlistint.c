#include "lists.h"
#include <stdlib.h>
/**
 *sum_dlistint - function to add the value of nodes
 *@head: pointer to the head of double list
 *Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *parcours;
parcours = head;
while (parcours != NULL)
{
sum = sum + parcours->n;
parcours = parcours->next;
}
return (sum);
}
