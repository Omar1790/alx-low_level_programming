#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: number of \ printed
 *
 * Return: Always 0 (success)
*/

void print_diagonal(int n)
{
	int space, slash;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space <= slash; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}

}
