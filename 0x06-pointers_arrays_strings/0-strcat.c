#include "main.h"
#include<stdio.h>
/**
 * _strlen - returns the length of a string
 * @str: a string whose length is returned
 * Return: length of string
 */
int _strlen(char *str)
{
int length = 0;
while (*str)
{
str++;
length++;
}
return (length);
}
/**
 * _strcat - Appends the source string to the destination string
 * @dest: destination string
 * @src: source setting
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
char *cat = dest + _strlen(dest);
int length = _strlen(dest) + _strlen(src);
while (*src)
{
*cat += *src;
src++;
cat++;
}
*cat += '\0';
cat -= (length);
*dest = *cat;
return (cat);
}

