#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	i = 30;
	x = 30;

	while (x < 40)
	{
	i = 30;
	while (i < 40)
		{
	putchar(x);
	putchar(i);
	if (i == 39 && x == 39)
	{
	break;
		}
	putchar(',');
	putchar(' ');
	i++;
	}
	x++;
	}
		putchar('\n');
		return (0);
}
