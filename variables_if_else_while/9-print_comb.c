#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		if (y <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(y + '0');
	}
	putchar('\n');
	return (0);
}
