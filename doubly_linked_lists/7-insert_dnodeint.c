#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function to insert a node in a double list
 * @h: pointeur to the head of the double list
 * @idx: index of the double list
 * @n: value of the node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *parcourt;
unsigned int i;
unsigned int count = 0;
if (h == NULL)
return (NULL);
parcourt = *h;
while (parcourt != NULL)
{
count++;
parcourt = parcourt->next;
}
if (idx > count)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
parcourt = *h;
for (i = 0; parcourt && i < idx - 1 ; i++)
parcourt = parcourt->next;
if (parcourt == NULL || parcourt->next == NULL)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = parcourt->next;
new_node->prev = parcourt;
if (parcourt->next != NULL)
parcourt->next->prev = new_node;
parcourt->next = new_node;
return (new_node);
}

