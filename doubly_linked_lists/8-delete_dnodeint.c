#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that delete a node
 * @head: pointer to the head of the double list
 * @index: index at we have to delete the node
 * Return: 1 if it is good or -1 if an error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *parcourt;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
parcourt = *head;
while (parcourt != NULL && i < index)
{
parcourt = parcourt->next;
i++;
}
if (parcourt == NULL)
return (-1);
if (parcourt->prev != NULL)
parcourt->prev->next = parcourt->next;
else
*head = parcourt->next;
if (parcourt->next != NULL)
parcourt->next->prev = parcourt->prev;
free(parcourt);
return (1);
}
