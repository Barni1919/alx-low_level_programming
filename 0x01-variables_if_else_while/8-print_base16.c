#include <stdio.h>

/* No 3 */

/**
 * main - message goes here
 *
 * Return: the code returns 0 and chars (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
