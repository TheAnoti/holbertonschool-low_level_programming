#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet followed by a new line
 * return 0 (always)
 */
int main(void)
{
	char y;
	for (y = 'a' ; y <= 'z' ; y++)
	{
		_putchar("%c");
	}
	_putchar("\n");
	return (0);
}
