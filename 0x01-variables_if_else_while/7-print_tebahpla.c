#include <stdio.h>

/* No 3 */

/**
 * main - message goes here
 *
 * Return: the code returns 0 and chars (success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
