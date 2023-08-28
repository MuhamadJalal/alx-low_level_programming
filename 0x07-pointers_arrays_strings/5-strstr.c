#include "main.h"

/**
* _strstr - finds the first occurrence of the substring
* The terminating null bytes (\0) are not compared
*
* @haystack: finds the first occurrence of the substring needle in it
* @needle: the substring needle to search for
*
* Return: char.
*/
char *_strstr(char *haystack, char *needle)
{
int j = 0, i = 0;

if (haystack == '\0' || needle == '\0')
{
return (haystack);
}
while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
int a = 0;
int indicator = i;

while (needle[j] != '\0')
{
if (haystack[i] == needle[j])
{
a++;
}
j++;
}

if (a == indicator)
{
return (&haystack[i]);
}
}
i++;
j = 0;
}
return ('\0');
}
