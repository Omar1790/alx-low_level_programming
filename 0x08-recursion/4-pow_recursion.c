#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power y
 *
 * @x: base
 * @y: power
 *
 * Return: result of x to the power y or null if false
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * int _pow_recursion(x, y - 1));
}
