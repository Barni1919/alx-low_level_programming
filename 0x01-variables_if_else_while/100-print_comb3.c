#include <stdio.h>
#include <stdlib.h>

/* 4th project */

/**
 * main - Entry
 *
 * Return: always zero 0 (success)
 */
int main(void)
{

	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (((x * 10) + y) < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
