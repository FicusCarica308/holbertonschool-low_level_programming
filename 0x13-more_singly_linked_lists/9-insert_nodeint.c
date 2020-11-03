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
 *insert_nodeint_at_index - creates a new node after a given index
 *@head: a pointer to the current head
 *@idx: the index we want to place the new node after
 *@n: the value we will give our new node
 *Return: returns the pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *index = *head;
	listint_t *newNode;
	unsigned int index_max = find_max_index(*head);
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx > index_max)
		return (NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	for (i = 0; i < idx - 1; i++)
		index = index->next;
	newNode->next = index->next;
	index->next = newNode;
	newNode->n = n;
	return (newNode);
}
