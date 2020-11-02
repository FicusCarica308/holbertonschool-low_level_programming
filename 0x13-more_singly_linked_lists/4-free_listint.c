#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees an entire linked list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
