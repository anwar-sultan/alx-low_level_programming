#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j = 'A';
	for (; i <= 'z'; i++)
		putchar(i);
	for (; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
