#include "main.h"

/**
* _strncpy - copy src to dest string.
* @dest: pointer points to the string that will be appended to.
* @src: pointer points to the string needs to add to dest
* @n: the size of src string.
* Return: pointer to char
*/
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
