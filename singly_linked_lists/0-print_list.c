#include <stdio.h>
#include "lists.h"
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
size_t count = 0; //compteur
const list_t *current = h; // définir un pointeur qui va parcourir la list en démarrant au debut (h)
while (current != NULL) // verif si pas NULL
{
if (current->str == NULL) // parcourt la liste tant qu'il n'est pas NULL
printf("[0] (nil)\n"); // erreur si null
else
printf("[%u] %s\n", current->len, current->str); // sinon affiche la longueur et la chaine
count++; // incrementation du commpteur
current = current->next; // on passe au suivant
}
return (count); // retour du cocmpteur
}
