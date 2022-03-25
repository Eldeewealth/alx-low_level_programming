#include "main.h"

/**
 * leet - encodes  a string into 1337.
 * @s: pointer to char params
 * Return: *s
 */

char *leet(char *s)
{
	int i, j;
	char leet1[] = {'A', 'E', 'O', 'T', 'L'};
	char leet2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (s[i] == leet1[j] || s[i] == leet1[j] + ('a' - 'A'))
		{
		s[i] = leet2[j];
		}
		}
	}
	return (s);
}
