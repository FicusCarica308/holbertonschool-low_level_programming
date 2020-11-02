#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - This function prints all the elements of our data structure
 *list_t.
 *@h: A given data structure named h
 *Return: returns the total number of Nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int node_count = 0;

	if (temp == NULL)
		return (0);

		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			node_count++;
		}

	return (node_count);
}
