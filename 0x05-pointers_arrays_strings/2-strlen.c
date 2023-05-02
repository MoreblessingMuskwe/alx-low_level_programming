#include <stdio.h>

/**
 * _strlen -  a function that returns the length of a string
 * @s: string
 * Return: length
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);

}
