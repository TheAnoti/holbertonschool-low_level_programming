#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal.
 * @n: Nombre de fois que le caractère \ doit être imprimé.
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');  // Ajoute des espaces pour le décalage
}
_putchar('\\');  // Affiche le caractère de la diagonale
_putchar('\n');  // Passe à la ligne suivante
}
}
else
{
_putchar('\n');  // Affiche un retour à la ligne si n est 0 ou moins
}
}
