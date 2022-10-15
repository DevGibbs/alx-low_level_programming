#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * new line, except e and q
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}

	putchar('\n')
	return (0);
}
