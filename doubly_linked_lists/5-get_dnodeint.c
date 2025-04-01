#include "lists.h"
#include <string.h>
/**
 *get_dnodeint_at_index - function returns the nth node of a double list
 *@index : number of the index
 *@head : pointer to the head of the double list
 *Return: the number of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count;
for (count = 0; head != NULL; count++)
{
if (count == index)
return (head);
head = head->next;
}
return (NULL);
}
