#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to evaluate.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')  // On compte jusqu'à atteindre le caractère nul.
{
length++;
}

return length;
}
