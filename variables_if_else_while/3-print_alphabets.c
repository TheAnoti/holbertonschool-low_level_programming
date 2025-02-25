#include <stdio.h>

/**
 * main - print alphabet in lowaer and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char y;
	char o;

	for (y = 'a'; y <= 'z' ; y++)

	{
		putchar(y);
	}
	for (o = 'A'; o <= 'Z' ; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
