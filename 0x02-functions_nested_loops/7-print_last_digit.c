#include "holberton.h"
/**
 * print_last_digit - print the last digit of i
 * @i: number to find last digit
 *
 * Description: print the last digit of i.
 * Return: last digit
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
