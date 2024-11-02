#include "main.h"

/**
 * leet - Encode une chaîne de caractères en 1337.
 * @str: La chaîne de caractères à encoder.
 *
 * Return: Pointeur vers la chaîne encodée.
 */
char *leet(char *str)
{
    char letters[] = "aAeEoOtTlL";
    char leet_chars[] = "43071";
    int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_chars[j / 2];
break;
}
}
}

return (str);
}
