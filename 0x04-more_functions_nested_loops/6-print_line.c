#include "main.h"
/**
 * print_line - print number of times a character should be printed
 *
 * @n: number of times to print _
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
