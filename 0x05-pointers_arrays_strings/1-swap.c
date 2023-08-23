#include "main.h"

/**
 * swap_int - swaps the value of two intgers
 *
 * @a: input
 * @b: input
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
