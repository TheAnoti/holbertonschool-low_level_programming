#include <stdio.h>
/**
 * main - print all number in base sixteen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;
	char o;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y + '0');
	}
	for (o = 'a' ; o < 'g' ; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);

}
