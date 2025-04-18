#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
