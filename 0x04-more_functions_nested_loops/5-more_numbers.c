@include "main.h"

/**
 * more_numbers - printing numbers 0-14 10 times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int num, times;

	for (num = 0; num <= 14; num++)
	{
		for (times = 0; times <= 9; times++)
			_putchar(num + 48);
	}
	_putchar('\n');
}
