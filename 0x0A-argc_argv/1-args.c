#include <stdio.h>

/**
* main - prints the number of arguments passed into it
*
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
*
* Return: 0 when success.
*/

int main(int argc __attribute__((unused))، char *argv[])
{
       	printf("%u\n", argc - 1);
	return (0);
}
