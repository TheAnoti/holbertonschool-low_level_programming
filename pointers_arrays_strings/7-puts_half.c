#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
int length = 0, start;

while (str[length] != '\0')
length++;

if (length % 2 == 0)
start = length / 2;
else
start = (length - 1) / 2 + 1;

for (int i = start; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
