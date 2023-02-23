#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n: number of timea to print \.
 */
void print_diagonal(int n)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (i >= 2 && j <= i - 1)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
}
if (i == n)
{
break;
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
