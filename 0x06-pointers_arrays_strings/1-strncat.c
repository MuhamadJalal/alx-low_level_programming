#include "main.h"

/**
* _strcat - concatenate src to dest string.
* @dest: the string that will be appended to.
* @src: the string needs to add to dest
* @n: the size of src string.
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

	while (*(dest + dest_len) != '\0')
		dest_len++;
	while (*(src + src_len) != '\0' && dest_len < 97 && src_len < n)
	{
		*(dest + dest_len) = *(src + src_len);
		dest_len++;
		src_len++;
	}
	*(dest + dest_len) = '\0';
	return (dest);
}
