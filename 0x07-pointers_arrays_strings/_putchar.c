#include<unistd.h>
/**
 * _putchar - write character
 *
 * Return - character
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
