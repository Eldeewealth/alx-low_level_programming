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

	while (x < 60)
	{
	i = 30;
	while (i < 60)
		{
	putchar(x);
	putchar(i);
	if (i == 59 && x == 59)
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
