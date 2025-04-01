#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_dnodeint - function that adds a new node at the beginning of double list
 *@head : pointer to the head of the list
 *@n : value in the node
 *Return: the adress of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
if (*head != NULL)
{
(*head)->prev = new_node;
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
*head = new_node;
return (new_node);
}
