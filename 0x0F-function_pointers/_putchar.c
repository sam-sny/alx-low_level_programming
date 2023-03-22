#include<unistd.h>
/**
 * _putchar - write character to standarf output
 *
 * @c - character
 * Return: Success 1
 */
int _putchar(char c)
{
return (write(1,&c,1));
}

