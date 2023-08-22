#include "main.h"

/**
 * _strncpy - copies string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_last = dest;

	while (*dest_last != '\0')
		dest_last++;
	while (*src != '\0' && n > 0)
	{
		*dest_last = *src;
		dest_last++;
		src++;
		n--;
	}
	*dest_last = '\0';
	return (dest);
}
