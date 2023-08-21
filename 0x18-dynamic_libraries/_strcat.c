#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_last = dest;

	while (*dest_last != '\0')
		dest_last++;
	while (*src != '\0')
	{
		*dest_last = *src;
		dest_last++;
		src++;
	}
	*dest_last = '\0';
	return (dest);
}
