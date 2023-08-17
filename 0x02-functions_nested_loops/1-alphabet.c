#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * function that prints the alphabet, in lowercase, followed by a new line.
 *	from a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
