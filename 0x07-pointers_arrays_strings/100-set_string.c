#include "main.h"

/**
* set_string - sets the value of a pointer to a char
*
* @s: the pointer points to another pointer
* @to: the char to be add to pointer value
*
* Return: void.
*/
void set_string(char **s, char *to)
{
*s = to;
}
