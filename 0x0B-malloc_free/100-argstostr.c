#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */
char *argstostr(int ac, char **av)
{
	int c, c1;
	int a = 0;
	int str = 0;
	char *d;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (c1 = 0 ; av[c][c1] != '\0' ; c1++)
		{
			str++;
		}
		str++;
	}

	d = malloc(sizeof(char) * str);

	if (d == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (c1 = 0 ; av[c][c1] != '\0' ; c1++)
		{
			d[a] = av[c][c1];
			a++;
		}
		d[a] = '\n';
		a++;
	}
	return (d);
}
