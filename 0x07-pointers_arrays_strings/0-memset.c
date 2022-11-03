#include "main.h"

/**
* _memset - fills the memory with a constant byte
* @s: memory area
* @b: the byte
* @n: number of bytes to be filled
* Return: pointer to memory area of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
