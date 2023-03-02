#include<unistd.h>
/**
 * _putchar - print a character
 *
 * Return - character
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
