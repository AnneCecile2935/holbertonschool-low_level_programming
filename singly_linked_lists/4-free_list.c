#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *parc;
while (head != NULL) // tant que head n'est pas NULL
{
parc = head; // on parcourt 
head = head->next; // on passe au noeud suivant
free(parc->str); // on libère la chaine
free(parc); // on lièbere le noeud
}
}
