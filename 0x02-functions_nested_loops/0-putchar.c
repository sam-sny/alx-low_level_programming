#include "main.h"
/**
 * main - putchar example
 *
 * Return: 0 (Success)
 */
int main(void)
{
char *putchar = "_putchar";
while (*putchar)
{
_putchar(*putchar);
putchar++;
}
_putchar('\n');
return (0);
}

