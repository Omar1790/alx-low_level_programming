#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes writes the character c to stdout
 * @c the character to print
 *
 * Return: On Success 1.
 *	On Errorr -1 is returned. and error is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
