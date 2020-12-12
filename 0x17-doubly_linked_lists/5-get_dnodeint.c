#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    if (head == NULL)
        return (NULL);

    while (head != NULL)
    {
        if (i == index)
            return (head);
        i++;
        head = head->next;
    }
    return (NULL);
}
