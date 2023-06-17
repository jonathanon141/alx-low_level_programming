#include <stdio.h>
/**
 *main - entery point
 *Return: always 0
 */
int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
