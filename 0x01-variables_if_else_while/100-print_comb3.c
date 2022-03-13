#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	i = 20;
	x = 80;

	while (x < 90)
	{
	i = 20;
	while (i < 90)
		{
	putchar(x);
	putchar(i);
		if (i == 89 && x == 89)
	{
	break;
		}
	putchar(',');
	putchar(' ');											i++;
		}
		x++;
	}
			putchar('\n');
			return (0);
}
