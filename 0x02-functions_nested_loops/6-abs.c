#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: number
 * Return: always 0 (success)
 **/

int _abs(int i)
{
	if (i < 0)
		i = i * (-1);
	return (i);
}
