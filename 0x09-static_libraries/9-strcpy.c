#include "main.h"
/**
* *_strcpy - entry point
* the pointer points to char needs to reversed
* @dest: pointer points to empty string
* @src: the source to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
