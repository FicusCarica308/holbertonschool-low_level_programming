#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - This function prints all the elements of our data structure
 *list_t.
 *@h: A given data structure named h
 *Return: returns the total number of Nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int nodeCount = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		nodeCount++;
	}
	return (nodeCount);
}
