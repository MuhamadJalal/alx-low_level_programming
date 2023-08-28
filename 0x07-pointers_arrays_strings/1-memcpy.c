#include "main.h"

/**
* _memcpy - copies memory area
* @dest: the address of memory to print
* @src: the char to be printed
* @n: the size of the memory to print
*
* Return: char.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n) {
dest[i] = src[i];
i++;
}
return (dest);
}
