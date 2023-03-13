#include<unistd.h>
#include "main.h"
#include<stdio.h>
/**
 * _putchar - write the character c
 * @c: character to print
 * Return: 1 if successful
 */
int _putchar(char c)
{
return (write(1,&c,1));
}

