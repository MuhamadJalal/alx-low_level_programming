#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter.
*
* @str: the string which will be duplicated.
*
* Return: char - pointer to an array
*/
char *_strdup(char *str)
{
	char *string;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[len] != '\0'; len++)
	{
	}
	len++;
	len++;

	string = malloc(sizeof(string) * len);


	for (; i < len; i++)
	{
		if (string == NULL)
		{
			return (NULL);
		}

		string[i] = str[i];
	}


	return (string);
}
