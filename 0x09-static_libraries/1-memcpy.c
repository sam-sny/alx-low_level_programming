#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char *_memcpy(char *dest, char *src, unsigned int n)                                                {                                                 char *ptr = dest;
while (n--)                                       {                                                 *dest++ = *src++;                                 }                                                 return (ptr);                                     }
