#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a singly linked list,
 * prints each node's string and length, and returns the
 * total number of nodes.
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
count++;
current = current->next;
}
else
{
printf("[%d] %s\n", current->len, current->str);
count++;
current = current->next;
}
}
return (count);
}
