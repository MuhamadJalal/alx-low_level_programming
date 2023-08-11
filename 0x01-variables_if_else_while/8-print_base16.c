#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
char s;
for (c = 0; c < 10; c++)
putchar(48 + c);
for (s = 'a'; s <= 'f'; s++)
putchar(s);
putchar('\n');
return (0);
}
