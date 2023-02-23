#include <unistd.h>
/**
 * main - putchar example                          *
 * Return: 0 (Success)                             */                                               int _putchar(char c)
{
return (write(1,&c,1));
}
