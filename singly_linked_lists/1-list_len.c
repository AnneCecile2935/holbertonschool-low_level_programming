#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a singly linked list,
 * count each node's string and length, and returns the
 * total number of elements.
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}

