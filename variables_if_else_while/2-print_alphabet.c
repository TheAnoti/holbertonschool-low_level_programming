#include <stdio.h>
#
/**
 * main - print alphabet followed by a new line
 * return 0 (always)
 */
int main(void)
{
	char y;
	for (y = 'a' ; y <= 'z' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
