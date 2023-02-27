#include "main.h"
#include<stdio.h>
/**
 * print_array - print n element of an array
 * @a: array of integers
 * @n: number of items to print
 * Return: void
 */
void print_array(int *a, int n)
{
int sampson;
for (sampson = 0; sampson < n; sampson++)
{
printf("%d", a[sampson]);
if (sampson == n-1)
continue;
printf(", ");
}
printf("\n");
}
