#include <stdio.h>
#include <stdlib.h>
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
	char *copy;
	int strLen = 0;
	int i = 0;
	list_t *nwHed;

	nwHed = malloc(sizeof(list_t));
	if (nwHed == NULL)
		return (NULL);

	/*for loop to find length of str*/
	for (strLen = 0; str[strLen] != '\0'; strLen++)
	{
	}

	copy = malloc(sizeof(char) * (strLen + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	nwHed->str = copy;
	nwHed->len = strLen;
	nwHed->next = *head;
	*head = nwHed;

	return (*head);
}
