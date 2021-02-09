#include "holberton.h"
/**
 * main - entry point
 * Return: always 0 (success)
 **/

int _abs(int i)
{
	if (i < 0)
		i = i * (-1);
	return (i);
}
