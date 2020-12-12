#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *new_node , *temp_head = *h;

    if (idx == 0)
        return (add_dnodeint(&*h, n));
	while (temp_head != NULL)
	{
		if (i == idx)
        {
            new_node = malloc(sizeof(dlistint_t));
            if (new_node == NULL)
                return (NULL);
            new_node->n = n;
            new_node->next = temp_head;
            new_node->prev = temp_head->prev;
            temp_head->prev->next = new_node;
            temp_head->prev = new_node;
            return (new_node);
        }
		i++;
		temp_head = temp_head->next;
	}
    if (idx > i)
        return (NULL);
    return (add_dnodeint_end(&*h, n));
}