#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
