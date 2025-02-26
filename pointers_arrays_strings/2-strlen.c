#include "main.h"
#include <unistd.h>
/**
 * _strlen - print the lenght of the string
 *
 * @s: value of a string
 *
 * Return: Lenght (success)
 */

int _strlen(char *s)
{
	int longueur = 0;

	while(s[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}
