#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14,
 * chaque série de nombres est suivie d'une nouvelle ligne.
 */

void more_numbers(void)
{
int i, num;

for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar('1');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
