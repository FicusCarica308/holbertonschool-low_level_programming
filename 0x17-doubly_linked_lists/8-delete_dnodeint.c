#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at a given index
 *@head: the current head of the linked list
 *@index: the index we want to remove the node in at
 *Return: 1 if free/removal is succseful and -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp_head = *head;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp_head->next != NULL)
			temp_head->next->prev = NULL;
		*head = temp_head->next;
		free(temp_head);
		return (1);
	}

	while (temp_head != NULL)
	{
		if (temp_head->next == NULL)
			break;
		if (i == index)
		{
			temp_head->prev->next = temp_head->next;
			temp_head->next->prev = temp_head->prev;
			free(temp_head);
			return (1);
		}
		i++;
		temp_head = temp_head->next;
	}
	if (index > i)
		return (-1);
	temp_head->prev->next = NULL;
	free(temp_head);
	return (1);
}
