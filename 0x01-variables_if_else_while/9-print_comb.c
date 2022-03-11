i#include <stdio.h>
#include <stdlib.h>

/* 4th project */

/**
 * main - Entry
 *
 * Return: always zero 0 (success)
 */
int main(void)
{

	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
