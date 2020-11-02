#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a new node to the end of the current last node
 *@head: the current head of the list
 *@n: the integer to be added to the new node
 *Return: returns the pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwHed;
	listint_t *temp = *head;

	nwHed = malloc(sizeof(listint_t));
	if (nwHed == NULL)
		return (NULL);

	nwHed->n = n;
	nwHed->next = NULL;

	if (*head == NULL)
		*head = nwHed;
	else
	{
		/*loops to the end of the current list to get the last node address*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nwHed;
	}
	return (*head);
}
