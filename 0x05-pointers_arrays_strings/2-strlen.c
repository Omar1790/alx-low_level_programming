#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string input
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int var;

	for (var = 0; *s != '\0'; s++)
		++var;

	return (var);
}
