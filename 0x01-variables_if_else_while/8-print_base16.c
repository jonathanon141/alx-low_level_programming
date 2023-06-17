#include <stdio.h>
/**
 *main - entery point
 *Return: always 0
 */
int main(void)
{
	int num = '0';
	int al = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
