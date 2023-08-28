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
int needleLength = 0, haystackLength = 0, substringLength = 0, k, j = 0, l;
char *return_value;

while (needle[needleLength] != '\0')
{
needleLength++;
}
while (haystack[haystackLength] != '\0')
{
haystackLength++;
}

if (needleLength == 0) {
return (haystack);
}
while (haystack[j] != '\0')
{
if (haystack[j] == needle[0])
{
return_value = &haystack[j];
l = j;
substringLength = 0;
for (k = 0; k < needleLength; k++)
{
if (haystack[l] == needle[k])
substringLength++;
l++;
}
}
if (substringLength == needleLength)
return (return_value);
j++;
}
return ('\0');

}
