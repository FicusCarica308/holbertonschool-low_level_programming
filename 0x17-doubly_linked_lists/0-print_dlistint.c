#include "lists.h"
/**
*print_dlistint - prints all values of a doubly linked list data struct
* @h: This is the head to our current data struct linked list
* Return: returns the amount of nodes in the struct
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp_head;
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	temp_head = h;

	while (temp_head != NULL)
	{
		printf("%d\n", temp_head->n);
		temp_head = temp_head->next;
		nodes++;
	}
	return (nodes);
}
