#include <stdio.h>
#include "lists.h"
/**
 * list_len - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a singly linked list,
 * prints each node's string and length, and returns the
 * total number of nodes.
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
return (count);
else
count++;
current = current->next;
}
return (count);
}

