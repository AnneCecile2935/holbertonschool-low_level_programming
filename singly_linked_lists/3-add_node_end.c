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
list_t *node_end; // pointeur du dernier noeud
list_t *parc = *head; // pointeur qui va parcourir la list et démarre à head
unsigned int len = 0;
if (str == NULL) // verif si la chaine n'est pas nulle
return (NULL);
while (str[len]) // compte la taille de la chaine
len++;
node_end = malloc(sizeof(list_t)); // alloue mémoire pour le noeud
if (node_end == NULL) // verifie s'il n'est pas null
return (NULL);
node_end->str = strdup(str); // on duplique la chaine str avec strdup et on le copie dans node_end
node_end->len = len; // définir la taille du noeud
node_end->next = NULL; // le noeud suivant sera le NULL
if (*head == NULL) // si on arrive à la fin de la liste
{
*head = node_end; // on "place le noeud"
return (node_end); // retour du noeud
}
while (parc->next) // si la liste est déjà "prise"
{
parc = parc->next; // on parcourt le noeud suivant
}
parc->next = node_end; // on place notre noeud de fin après
return (node_end); // on retourne le noeud
}
