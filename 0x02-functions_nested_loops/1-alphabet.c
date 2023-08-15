#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}

/**
* print_alphabet - entry point
*
* Description: This function prints the alphabet, in lowercase
*
* Return: void
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
