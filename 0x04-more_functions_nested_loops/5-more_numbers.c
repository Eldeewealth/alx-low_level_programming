#include "main.h"

/**
 * more_numbers - a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
	for (b = '0'; b < '15'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
