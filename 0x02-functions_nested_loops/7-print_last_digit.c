#include "holberton.h"
/**
 * print_last_ digit - print the last digit of i
 * return: Always void
 */

int print_last_digit(int i)
{
        int j;

        j = i % 10;
	if (j <= 0)
		j = j * (-1);
	_putchar('0' + j);
	return (j);
}
