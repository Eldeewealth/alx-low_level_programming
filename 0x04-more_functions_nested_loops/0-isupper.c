#include "main.h"
/**
 * _islower  - A function that checks for the Uppercase character.
 * @c: the character to be checked
 * Return: 1 if c is Upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
		{
			return (1);
		}
		else
			{
		return (0);
			}
}
