#include "main.h"

/**
 * _islower(int c) - a function that checks for lowercase character.
 *
 * @c: checks input
 *
 * Return: returns 1 if c is lowercase
 * 		otherwise return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
