#include <stdio.h>

/* 4th project */

/**
 * main - Entry
 *
 * Return: always zero 0 (success)
 */
int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}	
	putchar('\n');

	return (0);
}
