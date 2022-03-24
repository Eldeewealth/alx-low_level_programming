#include "main.h"
#include <stdio.h>

/**
 *cap_string - a function that capitalizes all words of a string.
 *@s: string to be capitalized
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i, j;
	char seperate[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[0] >= 'a' && s[0] <= 'z')
	s[0] -= 0;
	for (j = 0; seperate[j] != '\0'; j++)
	if (s[i] == seperate[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
	s[i + 1] -= 0;
	}
	return (s);
}
