#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees an entire linked list and sets the head to NULL
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			hold = *head;
			*head = (*head)->next;
			free(hold);
		}
		*head = NULL;
	}
}
