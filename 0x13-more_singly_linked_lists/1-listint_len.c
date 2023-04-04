#include<stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a link listint_t list.
 *
 * @h: pointer to the head
 * Return: the number of elements ina linked list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
int counter = 0;
while (temp != NULL)
{
temp = temp->next;
counter++;
}
return (counter);
}

