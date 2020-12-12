#include "lists.h"
/**
 *get_dnodeint_at_index - gets node at a given index (index we move head to)
 *@head: the current head of the linked list
 *@index: the given index of the linked list to find the node
 *Return: returns node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
