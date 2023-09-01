#include "main.h"


/**
* _isupper - check the code.
* @c: is the char to test
* Return: 0 || 1.
*/
int _isupper(int c)
{
char d;
for (d = 'A'; d <= 'Z'; d++)
{
if (d == c)
return (1);
}
return (0);
}
