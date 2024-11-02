#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Pointeur vers la première chaîne.
 * @s2: Pointeur vers la deuxième chaîne.
 *
 * Return: 0 si les chaînes sont identiques,
 * une valeur positive si s1 > s2,
 * une valeur négative si s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}

return (s1[i] - s2[i]);
}
