#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entery point
 *Return: Always (0);
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	printf("Last digit of %d is", n);
	printf(" %d", l);

	if (l > 5)
	{
		printf(" and is greater than 5");
	}
	else if (l == 0)
	{
		printf(" and is 0");
	}
	else
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");


	return (0);
}

