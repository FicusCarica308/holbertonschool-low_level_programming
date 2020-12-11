#include "lists.h"
/**
 *dlistint_len - This function returns the amount of nodes in a linked list
 *@h: the head of the current linked lists
 *Return: returns the amount of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp_head;
	int nodes = 0;

	if (h == NULL)
		return (0);
	temp_head = h;
	while (temp_head != NULL)
	{
		nodes++;
		temp_head = temp_head->next;
	}
	return (nodes);
}
