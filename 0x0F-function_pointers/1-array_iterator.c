#include<stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes functions given as a 
 * parameter on eacg element of an array
 * @array: the array
 * @size: size of the array
 * @action: function pointers
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
int a = size;
int i;
if (array && (size > 0) && action)
for (i = 0; i < a; i++)
{
(action)(array[i]);
}
}

