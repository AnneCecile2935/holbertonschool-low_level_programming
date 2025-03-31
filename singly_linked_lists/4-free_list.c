#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *parc;
while (head != NULL)
{
parc = head;
head = head->next;
free(parc->str);
free(parc);
}
}
