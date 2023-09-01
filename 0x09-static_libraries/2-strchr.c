#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the address of text to search in
* @c: the char to look for
*
* Return: char.
*/
char *_strchr(char *s, char c)
{
if (*s == '\0')
{
return (s);
}
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return ('\0');
}
