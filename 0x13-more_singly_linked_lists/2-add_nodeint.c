#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - this function adds a node to the start of a link list
 *and returns its address
 *@head: a pointer to our current head node
 *@n: the new integer to be placed
 *Return: returns the address of the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwHed;

	nwHed = malloc(sizeof(listint_t));
	if (nwHed == NULL)
		return (NULL);


	nwHed->n = n;
	nwHed->next = *head;
	*head = nwHed;
	return (*head);
}
