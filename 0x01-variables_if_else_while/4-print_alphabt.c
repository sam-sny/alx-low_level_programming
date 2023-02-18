#include<stdio.h>
/**
 * main - print alphabet except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}

