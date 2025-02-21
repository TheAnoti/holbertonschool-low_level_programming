#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - If the number is greater equal on smaller than O
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	}
	printf("%d is negative", n);
	return (0);
}
