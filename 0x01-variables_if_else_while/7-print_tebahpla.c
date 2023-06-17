#include <stdio.h>
/**
 *main - entery point
 *Return: always 0
 */
int main(void)
{
	int rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
