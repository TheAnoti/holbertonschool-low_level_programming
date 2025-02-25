#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;

	for (y = 'z' ; y >= 'a' ; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
