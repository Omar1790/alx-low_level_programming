#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: int input
 *
 * Returns: x
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	_putchar(n + '0');
	return (n);
}
