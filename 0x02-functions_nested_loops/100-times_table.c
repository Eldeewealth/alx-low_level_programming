#include "main.h"
/**
 * print_times_table - a function that  prints times table, starting with 0.
 * @x: the number of tines table to be printed
 */
void print_times_table(int x)
{
	int i, j, first, second, third;

		if (x > 15 || x < 0)
		return;
		for (i = 0; i <= x; i++)
			{
		for (j = 0; j <= x; j++)
		{
			first = (i * j) / 100;
			second = ((i * j) / 10) % 10;
			third = (i * j) % 10;
		if (j > 0)
			{
		if ((i * j) < 100)
		_putchar(' ');
			else
	_putchar(first + '0');
		if ((i * j) < 10)
		_putchar(' ');
		else
		_putchar(second + '0');
			}
		_putchar(third + '0');
		if (j == x)
		{
			_putchar('\n');
			}
		else
			{
		_putchar(',');
		_putchar(' ');
				}
					}
			}
}

