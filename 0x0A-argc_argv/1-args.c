#include <stdio.h>
#include<stdlib.h> 
/**	
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
