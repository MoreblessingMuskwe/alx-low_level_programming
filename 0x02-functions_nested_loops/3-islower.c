#include "main.h"

/**
 * _islower -Check for loercase character
 * @c: The character to be checked
 * Return: i for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
