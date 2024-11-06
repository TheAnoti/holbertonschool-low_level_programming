#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}

printf("Sum of the main diagonal: %d\n", sum1);
printf("Sum of the secondary diagonal: %d\n", sum2);
}
