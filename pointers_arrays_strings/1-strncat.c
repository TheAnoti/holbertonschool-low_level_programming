#include "main.h"

/**
 * _strncat - Concatène jusu n caractères d'une chaînrc une chaîne de dest
 * @dest: Pointeur vers la char de destination.
 * @src: Pointeur vers la char src.
 * @n: Nombre maximum de caractères à copier de src.
 *
 * Return: Pointeur vers la chaîne résultante `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
