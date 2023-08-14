#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing letters from z to a
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
