#include "main.h"

/**
 * abs_val - computes the absolute value of an interger
 * @c:The number to be computed
 * Return: absolute value or zero
 */

int abs_val(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
