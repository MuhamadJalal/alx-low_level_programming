#include "main.h"

/**
* print_alphabet_x10 - entry point
*
* Description: This function prints 10 times the alphabet, in lowercase
*
* Return: void
*/
void print_alphabet_x10(void)
{
char c;
for (int i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
_putchar('\n');
}
