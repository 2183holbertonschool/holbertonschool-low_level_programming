#include "holberton.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: operand
 * Return: always 0 (success)
 **/

int _isalpha(int c)
{
	int i = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		i = 1;
	return (i);
}
