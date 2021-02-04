#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 **/
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 6)
	{
		printf("Last digit of %i is %i qnd greater than\n", n, r);
	}
	if (r == 0)
	{
		printf("Last digit of, %i is 0 an is 0\n", n);
	}
	else if (r < 6 && r != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
