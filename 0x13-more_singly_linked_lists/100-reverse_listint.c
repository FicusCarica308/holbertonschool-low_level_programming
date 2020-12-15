#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - a function to reverse a linked list
 *@head: the head of the linked list
 *Return: returns a pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newHead;
	if (head == NULL)
		return (NULL);
	newHead = reverse_listint(&(*head));
	(*head)->next->next = *head;
        (*head)->next = NULL;
	return (newHead);
}
