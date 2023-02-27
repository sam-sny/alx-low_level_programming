#include<unistd.h>
/**
 * _putchar - write out a character
 *
 * @c: character to print
 *
 * Return: 0 on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1,&c,1));
}

