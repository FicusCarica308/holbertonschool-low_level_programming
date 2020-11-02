#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - this function will print the value of the head and remove it
 *@head: the pointer to the current head
 *Return: returns the current value of the head before removing it
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = 0;

	if (temp == NULL)
		return (0);
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
