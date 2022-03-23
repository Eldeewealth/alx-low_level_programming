#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		pass = rand() % 70;
		if ((c + pass) > 2772)
		break;
		c += pass;
		printf("%c", pass);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
