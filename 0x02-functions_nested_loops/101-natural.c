#include <stdio.h>
/**
 * main - list all natural numbers and multiples of 3
 * Return: 0 (success)
 */
int main(void)
{
int num, sum;
sum = 0;
for (num = 0; num < 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}

