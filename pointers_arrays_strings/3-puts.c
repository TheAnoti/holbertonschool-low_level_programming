#include "main.h"
/**
 * _puts - function that print a string
 *
 * @str: strings that will be printed
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
