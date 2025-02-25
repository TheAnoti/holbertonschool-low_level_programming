#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0 ; y <= 9 ; y++)
	{
		putchar(y + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
