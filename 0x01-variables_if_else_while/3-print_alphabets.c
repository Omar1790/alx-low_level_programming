#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all the alphabets lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');

	return (0);
}
