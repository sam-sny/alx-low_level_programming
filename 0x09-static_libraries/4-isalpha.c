#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int _isalpha(int c)                               {                                                 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))                                               {                                                 return (1);                                       }                                                 return (0);                                       }
