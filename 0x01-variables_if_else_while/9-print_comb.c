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
{
putchar(c);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
