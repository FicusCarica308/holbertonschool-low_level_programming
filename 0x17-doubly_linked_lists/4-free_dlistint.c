#include "lists.h"
/**
 *free_dlistint - frees a given linked list
 *@head: The current head of the given linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_head;

	while (head != NULL)
	{
		free_head = head;
		head = head->next;
		free(free_head);
	}
}
