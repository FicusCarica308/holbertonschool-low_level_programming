#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - prints the sum of all the values of our linked integer list
 *@head: the pointer to the head of our data structure
 *Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
