#include <stdio.h>

/*
 * main - entry point
 *
 * Descrition: print all lowercase alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	
	return (0);
}
