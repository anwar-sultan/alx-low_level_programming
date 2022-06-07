#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';
	char j = 'a';

	for (; i <= '9'; i++)
		putchar(i);
	for (; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
