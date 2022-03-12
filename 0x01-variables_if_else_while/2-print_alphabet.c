#include <stdio.h>

/*
 * main - Prints the alphabet.main
 *
 * main - Prints numbers between 00 to 89
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
