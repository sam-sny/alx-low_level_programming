#include "main.h"
/**
 * powX - powers a number b to thebp power
 * @b: base                                        * @p: power
 * Return: return b to te power of p
 */
unsigned long int powX(int b, int p)
{
unsigned long int ans = 1;
while (p)
{
ans *= b;
p--;
}
return (ans);
}
/**
 * set_bit - prints the binary representation of a number.
 * @n: input unsigned long                         * @index: index to return
 * Return: value at input index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int test;
if (index > sizeof(n) * BIT_SIZE - 1)
return (-1);
test = powX(2, index);
*n = *n | test;
return (1);
}
