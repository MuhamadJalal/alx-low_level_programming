#include <stdio.h>
#include <stdlib.h>

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

	if (arg < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				sum += atoi(argv[i][j]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
