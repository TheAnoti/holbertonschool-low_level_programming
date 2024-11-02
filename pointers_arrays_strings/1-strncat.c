#include "main.h"

/**
 * _strncat - Concatène jusqu'à n caractères d'une chaîne source à une chaîne de destination.
 * @dest: Pointeur vers la chaîne de destination.
 * @src: Pointeur vers la chaîne source.
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
