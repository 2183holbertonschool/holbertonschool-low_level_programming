#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 6)
	{
		printf("Last digit of, %i and is %i greater than 6 and not 0", n, r);
	};
	if (r == 0)
	{
		printf("Last digit of, %i and is 0 an is 0", n);
	}
	else if (r < 6)
	{
		printf("Last digit of, %i and is %i less than 6 and not 0", n, r);)
	};

	return (0);
}
