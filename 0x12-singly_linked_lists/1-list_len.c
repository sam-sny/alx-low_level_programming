#include<stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements in linked list
 * @h: pointer to structure
 * Return: retutn number of elements in a list_t list
 */
size_t list_len(const list_t *h)
{
const list_t *temp = h;
int elements_counter = 0;
while (temp != NULL)
{
elements_counter++;
temp = temp->next;
}
return(elements_counter);
}

