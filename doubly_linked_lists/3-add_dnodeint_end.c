#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 *@head : pointe to the head of the double list
 *@n : number to input int the new node
 *Return: the adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *parc;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*head == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*head = new_node;
return (new_node);
}
parc = *head;
while (parc->next != NULL)
{
parc = parc->next;
}
parc->next = new_node;
new_node->prev = parc;
return (new_node);
}
