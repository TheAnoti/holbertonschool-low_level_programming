#include "main.h"

/**
 * swap_int - function that can swap value of int
 *
 * @a: int that will be value swapped
 *
 * @b: int that will be value swapped
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
