#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to search in
 * @accept: the characters to match in the initial segment of s
 *
 * Return: nb of bytes in de init sgmt of s consisting only of bytes frm accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, found;

while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
count++;
break;
}
}
if (!found)
break;
s++;
}
return (count);
}
