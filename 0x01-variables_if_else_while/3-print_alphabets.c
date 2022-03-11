#include <stdio.h>

/* No 3 */

/**
 * main - message goes here
 *
 * the code returns 0 and chars
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
