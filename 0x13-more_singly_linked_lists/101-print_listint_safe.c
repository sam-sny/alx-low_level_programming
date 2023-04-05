#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: head nide
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
int num;
register short j = 0;
while (head)
{
num = head - head->next;
j++;
printf("[%p] %i\n", (void *)head, head->n);
if (num > 0)
head = head->next;
else
{
printf("-> [%p] %i\n", (void *)head->next, head->next->n);
break;
}
}
return (j);
}

