#include <stdio.h>

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
	int i = 0, sum = 0;

	if (arg < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}

		sum += argv[i];
	}

	printf("%d\n", sum);
	return (0);
}
