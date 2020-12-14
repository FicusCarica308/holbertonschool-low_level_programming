#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int return_val;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    return_val = delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    printf("return value: %d\n", return_val);
    return_val = delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    printf("return value: %d\n", return_val);
    return_val = delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    printf("return value: %d\n", return_val);
    return (0);
}