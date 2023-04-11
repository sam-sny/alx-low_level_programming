#include "main.h"
#define BIT_SIZE 8
/**                                                * powX - powers a number b to thebp power         * @b: base                                        * @p: power                                       * Return: return b to te power of p               */                                               unsigned long int powX(int b, int p)
{                                                 unsigned long int ans = 1;                        while (p)
{                                                 ans *= b;                                         p--;                                              }
return (ans);
}
/**
 * clear_bit - set a bit to zero at the index index.
 * @n: input unsigned long
 * @index: index to return
 * Return: value at input index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int test;
if (index > sizeof(n) * BIT_SIZE - 1)
return (-1);
test = powX(2, index);
*n = (*n & test) ? *n ^ test : *n;
return (1);
}

