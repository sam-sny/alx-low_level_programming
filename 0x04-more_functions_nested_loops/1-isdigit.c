#include "main.h"
/**
 * _isdigit - check for a digit 
 *
 * @c: character
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
