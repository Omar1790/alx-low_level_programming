#include "main.h"

/**
 * print_alphabet_x10 -  function that prints 10 times the alphabet.
 *
*/

void print_alphabet_x10(void)
{
	int ch, l;

	for (l = 0; l <= 9; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
