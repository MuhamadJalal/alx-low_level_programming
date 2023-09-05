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
{
	char *string;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str) + 1;
	string = malloc(sizeof(char) * len);

	i = 0;
	while (i < len)
	{
		if (string == NULL)
		{
			return (NULL);
	}
		string[i] = str[i];
		i++;
	}
	return (string);
}
