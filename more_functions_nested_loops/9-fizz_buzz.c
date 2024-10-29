#include <stdio.h>

/**
 * fizz_buzz - Determines what to print for a given number.
 * @n: The number to evaluate.
 *
 * Return: 1 if "FizzBuzz" or "Fizz" or "Buzz" was printed, otherwise 0.
 */
int fizz_buzz(int n)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
return 1;
}
else if (n % 3 == 0)
{
printf("Fizz");
return 1;
}
else if (n % 5 == 0)
{
printf("Buzz");
return 1;
}
return 0;
}

/**
 * main - Fizz-Buzz program that prints numbers from 1 to 100.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (!fizz_buzz(i))
printf("%d", i);

if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
