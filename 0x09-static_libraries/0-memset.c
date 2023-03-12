#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
{
*s++ = b;
}
return (ptr);
}
