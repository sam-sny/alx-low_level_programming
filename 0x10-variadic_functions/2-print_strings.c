#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"
/**
 * prints_strings - prints strings
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *string;
va_start(strings, n);
for (i = 0; i < n; i++)
{
string = va_arg(strings, char *);
printf("%s", string != NULL ? string : "(nil)");
if (i < (n - 1) && seperator != NULL)
printf("%s", seperator);
}
printf("\n");
va_end(strings);
}

