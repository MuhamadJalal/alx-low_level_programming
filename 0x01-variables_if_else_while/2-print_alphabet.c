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
char s;

for (s = 'a'; s >= 'z'; s++)
putchar("%s", s);
putchar('\n');
return (0);
}
