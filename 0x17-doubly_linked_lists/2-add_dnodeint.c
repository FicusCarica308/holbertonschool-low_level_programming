#include "lists.h"
/**
 *add_dnodeint - adds a new head node to a doubly linked list
 *@head: the current head of the list
 *@n: the new number to be insert as the data for the node
 *Return: returns the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	/*if (new_head == NULL)
		return (NULL);*/
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	*head = new_head;
	return (new_head);
}
