#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print a rand numb and tell if it greater than five and less than six
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	/*printf(\"Last digit of %d is %d\", n, y);*/
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	} else if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
