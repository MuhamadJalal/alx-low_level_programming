#include "main.h"

/**
* _islower - entry point
*
* Description: This function checks for lowercase character.
* @c: the charater to check
*
* Return: void
*/
int _islower(int c)
{
return (c >= 'a' && c <= 'z' ? 1 : 0);
}
