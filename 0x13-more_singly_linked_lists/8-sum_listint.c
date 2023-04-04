#include<stdlib.h>
#include "lists.h"
/**
 * sum_listint - returna sum of all the data(n) of the linked list
 *
 * @head: pointer to the head
 * Return: sum of all data(n) of a linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;
if (head == NULL)
return (0);
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

