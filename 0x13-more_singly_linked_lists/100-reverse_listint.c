#include<stdlib.h>
#include "lists.h"
/**
 * *reverse_listint - reversed a linked list
 *
 * @head: pointer to head
 * Return: pointer to the firat node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
prev = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = prev;
}
*head = prev;
return (*head);
}

