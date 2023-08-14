#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all the lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
