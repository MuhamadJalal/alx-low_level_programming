#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
*
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
*
* Return: 0 when success.
*/

int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	for (; i < argc; i++)
	{
		for (; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
