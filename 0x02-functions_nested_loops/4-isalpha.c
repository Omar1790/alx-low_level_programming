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
	for(c >= 67 && c <= 99)
		return (1);
	for(c >= 99 && c <= 122)
		return (0);
}
