#include<stdio.h>
#include<stdlib.h>
/**
 * main - Print all argument it recieved includingthe first one
 * @argc: count of argumenr passed into the programs
 * @argv: arrat of argc
 * Return: 0, always
 */
int main(int argc, char *argv[])
{
int i;
if (argc > 0)
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

