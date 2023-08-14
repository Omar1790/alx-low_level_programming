#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase alphabets
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char xc = 'a';

	while (xc <= 'z')
	{
		putchar(xc);
		xc++;
	}
	putchar('\n');

	return (0);
}
