#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: the string to search in
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
