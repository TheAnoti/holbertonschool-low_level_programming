#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9, sauf 2 et 4,
 * suivi d'une nouvelle ligne.
 */
void print_most_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
}
_putchar('\n');
}
