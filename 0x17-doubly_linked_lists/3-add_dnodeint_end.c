#include "lists.h"
/**
 *add_dnodeint_end - puts a new node at the end of the list
 *@head: The current head of the list
 *@n: the new data for the node
 *Return: returns the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end;
	dlistint_t *temp_head = *head;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		/*loops to the end of the current list to get the last node address*/
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		temp_head->next = new_end;
		new_end->prev = temp_head;
	}
	return (new_end);
}
