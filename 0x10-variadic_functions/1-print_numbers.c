#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
num = va_arg(numbers, int);
printf("%d", num);
if (i < (n - 1) && seperator != NULL)
printf("%s", seperator);
}
printf("\n");
va_end(numbers);
}

