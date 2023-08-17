#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9 except 2 & 4
 *
*/

void print_most_numbers(void)
{
	int num;

	for (num >= 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}

	_putchar('\n');
}
