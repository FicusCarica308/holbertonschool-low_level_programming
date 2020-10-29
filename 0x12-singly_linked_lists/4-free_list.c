#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees an entire linked list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *curr;

	while (temp != NULL)
	{
		curr = temp->next;
		free(temp);
		temp = curr;
	}
}
