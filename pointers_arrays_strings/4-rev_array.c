#include "main.h"

/**
 * reverse_array - Renverse le contenu d'un tableau d'entiers.
 * @a: Pointeur vers le tableau d'entiers.
 * @n: Nombre d'éléments dans le tableau.
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
