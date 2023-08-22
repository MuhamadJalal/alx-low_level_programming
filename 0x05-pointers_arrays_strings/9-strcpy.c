#include <stdio.h>
#include "main.h"
/**
* *_strcpy - entry point
* the pointer points to char needs to reversed
* @dest: pointer points to empty string
* @src: the source to be copied
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (src[count] != '\n')
	{
		count++;
	}

	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\n';

	return (dest);
}
