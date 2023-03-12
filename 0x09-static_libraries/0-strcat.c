#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int _strlen(char *str)
{                                                 int length = 0;                                   while (*str)                                      {
str++;
length++;
}                                                 return (length);
}

char *_strcat(char *dest, char *src)              {
char *cat = dest + _strlen(dest);
int length = _strlen(dest) + _strlen(src);
while (*src)                                      {
*cat += *src;                                     src++;                                            cat++;                                            }                                                 *cat += '\0';
cat -= (length);
*dest = *cat;                                     return (cat);                                     }
