#include "main.h"

/**
 * _strncpy - Copie jusqua n caractère de la char src vers une char destiation
 * @dest: Pointeur vers la chaîne de destination.
 * @src: Pointeur vers la chaîne source.
 * @n: Nombre maximum de caractères à copier de src.
 *
 * Return: Pointeur vers la chaîne `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
