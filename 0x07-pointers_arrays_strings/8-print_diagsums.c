#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of
* the two diagonals of a square matrix of integers
*
* @a: the matrix
* @size: the matrix length
*
* Return: void.
*/
void print_diagsums(int *a, int size) {
    int i, j, left_diagonal = 0, right_diagonal = 0, last_index, l = 0;

    last_index = size - 1;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("i = %i, j = %i, last_index = %i\n", i, j, last_index);
            if (i == j)
                left_diagonal += a[l];
            if (j == last_index)
                right_diagonal += a[l];
            printf("left_diagonal = %i, right_diagonal = %i\n", left_diagonal, right_diagonal);
            l++;
        }
        last_index--;
    }
    printf("%i, %i\n", left_diagonal, right_diagonal);
}
