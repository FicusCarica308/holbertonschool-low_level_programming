#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *find_length - This function prints all the elements of our data structure
 *list_t.
 *@h: A given data structure named h
 *Return: returns the total number of Nodes.
 */
size_t find_length(const listint_t *h)
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
 *get_nodeint_at_index - returns the value of the node at the given index
 *@head: the current head
 *@index: the index of the node we are printing
 *Return: returns the pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_max = find_length(head);
	listint_t *temp = head;
	unsigned int i = 0;

	if (index > index_max)
		return (NULL);
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}
