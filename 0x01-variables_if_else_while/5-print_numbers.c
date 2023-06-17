#include <stdio.h>
/**
 *main - entery point
 *Return: always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num++);
	}
	printf("\n");
	return (0);
}
