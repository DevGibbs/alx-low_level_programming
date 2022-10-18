#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * followed by a new line
 */
void print_alphabet(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
		_putchar(ls);

	_putchar('\n');
}

