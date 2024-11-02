#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules d'une chaîne en majuscules.
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
