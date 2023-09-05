#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
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
	int i = 0, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	string = malloc(sizeof(string) * len);

	for (len = 0; i <= len; i++)
	{
		if (string == NULL)
		{
			return (NULL);
		}
		string[i] = str[i];
	}
	return (string);
}
