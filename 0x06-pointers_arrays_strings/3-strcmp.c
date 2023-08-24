#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: pointer points to the first string.
* @s2: pointer points to the second string.
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (s1_len == s2_len)
	{
		return (0);
	}
	return (*s1 - *s2);
}
