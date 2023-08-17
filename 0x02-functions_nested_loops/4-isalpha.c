#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: takes input from other function
 *
 * Return: 1 if true 0 if else
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
