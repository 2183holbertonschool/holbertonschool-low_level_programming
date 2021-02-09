#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: First operant
 * Return: always 0 (success)
 **/

int _islower(int c)
{
	int i = 0;

	if (c >= 97 && c <= 122)
		i = 1;
	return (i);
}
