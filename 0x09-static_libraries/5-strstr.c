#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char *_strstr(char *haystack, char *needle)       {                                                 char *a;                                          char *b;                                          b = needle;                                       if (*b == 0)                                      {                                                 return (haystack);                                }                                                 for (; *haystack != 0; haystack += 1)             {                                                 if (*haystack != *b)                              {                                                 continue;                                         }                                                 a = haystack;                                     while (1)                                         {                                                 if (*b == 0)                                      {                                                 return (haystack);
}
if (*a++ != *b++)
{
break;
}
}
b = needle;
}
return (NULL);
}
