#include "main.h"

/**
 * print_sign - print + if n is +ve & - if negative
 *
 * @n: integr input
 *
 * Return: 1 if +ve, -1 if -ve, 0 if 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}
