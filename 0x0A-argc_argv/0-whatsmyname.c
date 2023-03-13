#include<stdio.h>
#include<stdlib.h>
/**
 * main - print the name of the program followed by a new line
 * @argc: count of the arguments of the program
 * @argv: array of argc
 * Return: Always 0
 */
int main(int argc, char **argv)
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
return (1);
}
cents = atoi(argv[i]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
printf("%d\n", coins);
return (0);
}

