#include <stdio.h>

/**
 * main - Programme Fizz-Buzz qui affiche les nombres de 1 à 100
 * en remplaçant certains nombres par "Fizz", "Buzz" ou "FizzBuzz".
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
