#include <studio.h>

/**
 * print_line - A function that draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed.
 */

void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
}
