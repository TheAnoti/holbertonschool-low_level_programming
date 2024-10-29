#include "main.h"

/**
 * print_triangle - Affiche un triangle de taille `size` dans le terminal.
 * @size: Taille du triangle à imprimer.
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{

for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}

for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
