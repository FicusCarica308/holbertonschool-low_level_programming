#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees an entire linked list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
                hold = head;
                head = head->next;
                free(hold->str);
                free(hold);
	}
}
