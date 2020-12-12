#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a node at a given index
 *@h: the current head of the linked list
 *@idx: the index we want to add the new node in at
 *@n: the data for the new node
 *Return: returns the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp_head = *h;

	if (idx == 0)
		return (add_dnodeint(&*h, n));
	while (temp_head != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = temp_head;
			new_node->prev = temp_head->prev;
			temp_head->prev->next = new_node;
			temp_head->prev = new_node;
			return (new_node);
		}
		i++;
		temp_head = temp_head->next;
	}
/*checks if the idx given is greater than the max avaliable idx of list*/
/*which is found by i if the while loop runs until temp_head is NULL*/
	if (idx > i)
		return (NULL);
/*if the above is false then is safe to add a node after the last idx*/
	return (add_dnodeint_end(&*h, n));
}
