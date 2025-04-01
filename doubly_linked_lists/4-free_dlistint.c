#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint - function to free a double list
 *@head: pointer to the head of the double list
 *Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *parc;
dlistint_t *next_node;
parc = head;
while (parc != NULL)
{
next_node = parc->next;
free(parc);
parc = next_node;
}
}
