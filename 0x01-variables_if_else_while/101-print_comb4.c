#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		int j = 0;

		for (; j <= 9; j++)
		{
			int k = 0;

			for (; k <= 9; k++)
				if (k > j && j > i)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}

