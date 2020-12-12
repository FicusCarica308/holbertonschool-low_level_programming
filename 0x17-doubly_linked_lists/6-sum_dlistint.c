#include "lists.h"
/**
 *sum_dlistint - finds the sum of all the n data in this linked list
 *@head: the head of the current linked list
 *Return: returns the sum of all the n data (integers in the struct)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
