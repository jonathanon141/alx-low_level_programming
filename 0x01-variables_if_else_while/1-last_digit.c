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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_number = n % 10;

	printf("Last digit of %d is", n);
	printf(" %d", last_number);

	if (last_number > 5)
	{
		printf(" and is greater than 5");
	}
	if (last_number == 0)
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

