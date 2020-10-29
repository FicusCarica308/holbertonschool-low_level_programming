#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees an entire linked list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/*holds the current pointer of head*/
                temp = head;
                /*sets head to whatever head pointed to*/
                head = head->next;
                /*frees the string associated with temp*/
                free(temp->str);
                /*finall frees temp*/
                free(temp);
	}
}
