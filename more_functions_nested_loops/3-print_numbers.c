#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivi d'une nouvelle ligne.
 */
void print_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
