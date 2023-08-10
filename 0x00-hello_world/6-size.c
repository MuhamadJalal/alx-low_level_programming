#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeOf(char));
printf("Size of an int: %d byte(s)\n", sizeOf(int));
printf("Size of a long int: %d byte(s)\n", sizeOf(long int));
printf("Size of a long long int: %d byte(s)\n", sizeOf(long long int));
printf("Size of a float: %d byte(s)\n", sizeOf(float));
return (0);
}