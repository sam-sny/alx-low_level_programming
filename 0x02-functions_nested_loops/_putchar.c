#include<unistd.h>
/**
 * _putchar - write char c to standard output
 * @c - character to print
 *
 * Return: Success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1,&c,1));
}

