#include "main.h"

/**
* _strcat - concatenate src to dest string.
* @dest: the string that will be appended to.
* @src: the string needs to add to dest
* Return: char
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0, src_len = 0,

while (*dest != '\n')
dest_len++;
while (*src != '\n')
{
*(dest + dest_len) = *(src + src_len);
src_len++;
dest_len++;
}
*(dest + dest_len) = '\n';

return (dest);
}
