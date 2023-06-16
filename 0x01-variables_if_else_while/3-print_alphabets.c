#include <stdio.h>
/**
 *main - entery point
 *Return: always 0
 */
int main(void)
{
	int lower = 'a';
	int upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
		putchar('\n');
	return (0);
}
