#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_begin);
}
