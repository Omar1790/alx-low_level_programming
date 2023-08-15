#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possibe different combinations of two numbers
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	int x = 0, z;

	while (x <= 9)
	{
		z = 0;
		while (z <= 9)
		{
			if (x != z && x < z)
			{
				putchar(x + 48);
				putchar(z + 48);

				if (x != 8 && z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			z++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
