#include "main.h"

/**
 * _isalpha - main entry for a function that checks for alphabet characters
 * @c: The character to be checked
 * return: 1 for alphabet characters or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
