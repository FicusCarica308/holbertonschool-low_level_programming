#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - finds the length of a linked list
 *@h: pointer to the head of the list
 *Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int len = 1;

	if (temp == NULL)
		return (0);

	while (temp->next != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
