#include "main.h"

/**
* _memcpy - copies n bytes from src to dest
* @dest: the destination to copy to
* @src: source being copied from
* @n: quantity to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;

		dest++;

		src++;
	}

	return (ptr);
}
