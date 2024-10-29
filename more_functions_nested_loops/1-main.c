#include "main.h"
#include <stdio.h>

int main(void)
{
	char c1 = '5';
	char c2 = 'a';
	char c3 = '0';
	char c4 = '9';

	printf("%c: %d\n", c1, _isdigit(c1));
	printf("%c: %d\n", c2, _isdigit(c2));
	printf("%c: %d\n", c3, _isdigit(c3));
	printf("%c: %d\n", c4, _isdigit(c4));

	return (0);
}
