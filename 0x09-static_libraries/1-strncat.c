#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int _strlen(char *str)                            {                                                 int length = 0;                                   while (*str)                                      {                                                 str++;                                            length++;                                         }                                                 return (length);                                  }

char *_strncat(char *dest, char *src, int n)      {                                                 char *cat = dest + _strlen(dest);                 int length;                                       if (n > _strlen(src) + _strlen(dest))             length = _strlen(dest) + _strlen(src);            else                                              length = _strlen(dest) + n;                       while (*src && n > 0)                             {                                                 *cat += *src;                                     src++;                                            cat++;                                            n--;                                              }                                                 if (n > 0)                                        *cat += '\0';                                     cat -= (length);
*dest = *cat;
return (cat);                                     }
