#include "main.h"

/**
* _strlen - entry point
* the pointer points to char needs to know its length
* @s: pointer to the variable to update
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
