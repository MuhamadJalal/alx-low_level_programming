#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array: creates an array of chars,
* and initializes it with a specific char.
*
* @size: the return pointer array size
* @c: the return array content
*
* Return: pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i = 0;

	if (size == 0 || c == '\0')
	{
		return (NULL);
	}

	string = malloc(sizeof(c) * size);

	if (string == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		string[i] = c;
	}

	string[i] = '\0';

	return (string);
}
