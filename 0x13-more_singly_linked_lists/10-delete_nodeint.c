#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *find_max_index - This function finds the max index of a linked list
 *@h: the head of our linked list
 *Return: returns the total number of nodes minus one (the max index).
 */
size_t find_max_index(const listint_t *h)
{
	const listint_t *temp = h;
	int index_max = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		index_max++;
	}

	return (index_max - 1);
}
/**
 *delete_nodeint_at_index - removes a node at the given index
 *@head: a pointer to the current head
 *@index: the index we want to remove
 *Return: returns the pointer to the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_at = *head;
	listint_t *temp;
	unsigned int index_max = find_max_index(*head);
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node_at->next;
		free(node_at);
		return (1);
	}

	if (index > index_max)
		return (-1);

	for (i = 0; i < index - 1; i++)
		node_at = node_at->next;
	temp = node_at->next->next;
	free(node_at->next);
	node_at->next = temp;
	return (1);
}
