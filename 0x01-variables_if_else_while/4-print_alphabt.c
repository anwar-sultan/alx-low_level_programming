#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
		else
			continue;
	putchar('\n');
	return (0);
}
