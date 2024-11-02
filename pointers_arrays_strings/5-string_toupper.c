#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convertit toutes minuscules d'une chaîne en majuscule.
 * @str: Pointeur vers la chaîne de caractères.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
i++;
}

return (str);
}
