#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_end;
list_t *parc = *head;
unsigned int len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
node_end = malloc(sizeof(list_t));
if (node_end == NULL)
return (NULL);
node_end->str = strdup(str);
node_end->len = len;
node_end->next = NULL;
if (*head == NULL)
{
*head = node_end;
return (node_end);
}
while (parc->next)
{
parc = parc->next;
}
parc->next = node_end;
return (node_end);
}
