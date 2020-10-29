#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - finds the length of a linked list
 *@h: pointer to the head of the list
 *Return: returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int len = 0;

	while (temp->next != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
