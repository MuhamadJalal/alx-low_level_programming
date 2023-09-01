#include "main.h"

/**
* _strncat - concatenate src to dest string.
* @dest: pointer points to the string that will be appended to.
* @src: pointer points to the string needs to add to dest
* @n: the size of src string.
* Return: pointer to char
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
	}
	if (src_len < n)
	{
	dest[dest_len] = '\0';
	}
	return (dest);
}
