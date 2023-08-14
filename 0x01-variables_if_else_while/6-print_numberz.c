#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all single digit numbers using putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = '0';

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
