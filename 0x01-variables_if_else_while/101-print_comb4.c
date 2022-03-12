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

	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9 ; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if ((((x * 10) + (y * 10)) + z) < 89)
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
