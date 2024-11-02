#include "main.h"

/**
 * is_separator - Vérifie si un caractère est un séparateur de mot.
 * @c: Caractère à vérifier.
 *
 * Return: 1 si c'est un séparateur, 0 sinon.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
 * cap_string - Capitalise tous les mots d'une chaîne de caractères.
 * @str: Pointeur vers la chaîne de caractères.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
int i = 0;

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}

while (str[i] != '\0')
{
if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
{
str[i + 1] = str[i + 1] - ('a' - 'A');
}
i++;
}

return (str);
}
