#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possibe different combinations of three numbers
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);

					if (x != 7 && y != 8 && z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
