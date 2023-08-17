#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long start = 0, end = 1, sum;
unsigned long startPart1, startPart2, endPart1, endPart2;
unsigned long firstPart, secondPart;
for (i = 0; i < 92; i++)
{
sum = start + end;
printf("%lu, ", sum);
start = end;
end = sum;
}
startPart1 = start / 10000000000;
endPart1 = end / 10000000000;
startPart2 = start % 10000000000;
endPart2 = end % 10000000000;
for (i = 93; i < 99; i++)
{
firstPart = startPart1 + endPart1;
secondPart = startPart2 + endPart2;
if (startPart2 + endPart2 > 9999999999)
{
firstPart += 1;
secondPart %= 10000000000;
}
printf("%lu%lu", firstPart, secondPart);
if (i != 98)
printf(", ");
startPart1 = endPart1;
startPart2 = endPart2;
endPart1 = firstPart;
endPart2 = secondPart;
}
printf("\n");
return (0);
}
