#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

unsigned int _strspn(char *s, char *accept)       {                                                 unsigned int res = 0;                             int i, foundChar;                                 while (*s)                                        {                                                 for (i = 0; accept[i]; i++)                       {                                                 foundChar = 0;                                    if (*s == accept[i])                              {                                                 res++;                                            foundChar = 1;                                    break;                                            }                                                 }                                                 if (!foundChar)                                   break;                                            s++;                                              }                                                 return (res);                                     }
