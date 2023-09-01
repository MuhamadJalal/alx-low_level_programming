#include "main.h"

/**
* _isalpha - entry point
*
* Description: This functions checks for alphabetic character.
* @c: the charater to check
*
* Return: void
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
