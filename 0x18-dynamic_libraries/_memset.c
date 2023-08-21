#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
