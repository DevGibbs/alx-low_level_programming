#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * new line, except e and q
 * Return: Always 0
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
