#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - adds a new node to the end of the current last node
*@head: the current head of the list
*@str: the string to be added to the new node
*Return: returns the pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int strLen = 0;
	list_t *nwHed;
	list_t *temp = *head;

	nwHed = malloc(sizeof(list_t));
	if (nwHed == NULL)
		return (NULL);

	for (strLen = 0; str[strLen] != '\0'; strLen++)
	{
	}

	nwHed->str = strdup(str);
	nwHed->len = strLen;
	nwHed->next = NULL;

	if (*head == NULL)
		*head = nwHed;
	else
	{
		/*loops to the end of the current list to get the last node address*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nwHed;
	}
	return (*head);
}
