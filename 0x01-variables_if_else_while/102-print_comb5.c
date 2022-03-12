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
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9 ; z++)
			{
				for (a = 0; a <= 9; a++)
				{
					if (((z + a) > (x + y) && z >= x ) || x < z)
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(' ');
						putchar(z + '0');
						putchar(a + '0');
						if (x + y + z + a == 227 && x == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}	
			}
		}
	}
	putchar('\n');

	return (0);
}
