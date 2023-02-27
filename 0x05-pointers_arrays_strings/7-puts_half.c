#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int sampson = 0, len = 0, n;
while (str[sampson++])
len++;
if ((len % 2) == 0)
n = (len + 1) / 2;
else
n = (len + 1) / 2;
for (sampson = n; sampson < len; sampson++)
_putchar(str[sampson]);
_putchar('\n');
}
