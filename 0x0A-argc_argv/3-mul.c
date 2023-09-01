#include <stdio.h>

/**
* main - prints its name, followed by a new line.
*
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
*
* Return: 0 when success.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Eroro\n");
		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);

	return (0);
}
