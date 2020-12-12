#include "lists.h"
void free_dlistint(dlistint_t *head)
{
        dlistint_t *free_head;

        while (head != NULL)
        {
                free_head = head;
                head = head->next;
                free(free_head);
        }
}
