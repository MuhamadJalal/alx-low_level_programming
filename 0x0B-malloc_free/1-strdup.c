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
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
