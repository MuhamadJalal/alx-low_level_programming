#include "main.h"

/**
* _memcpy - copies memory area
* @s: the address of text to search in
* @c: the char to look for
*
* Return: char.
*/
char *_strchr(char *s, char c)
{

int i, len;

len = 0;
i = 0;

while (s[len] != '\0')
{
len++;
}

while (i < len)
{
if (s[i] == c)
return  (s[i]);
i++;
}
return (NULL);
}
