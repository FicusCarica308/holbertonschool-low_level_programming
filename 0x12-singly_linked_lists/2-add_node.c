#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - this function adds a node to the start of a link list
 *and returns its address
 *@head: a pointer to our current head node
 *@str: a string that needs to be duplicated into the new node
 *Return: returns the address of the node created
 */
list_t *add_node(list_t **head, const char *str)
{
	int strLen = 0;
	list_t *nwHed;

	nwHed = malloc(sizeof(list_t));
	if (nwHed == NULL)
		return (NULL);

	for (strLen = 0; str[strLen] != '\0'; strLen++)
	{
	}

	nwHed->str = strdup(str);
	nwHed->len = strLen;
	nwHed->next = *head;
	*head = nwHed;
	return (*head);
}
