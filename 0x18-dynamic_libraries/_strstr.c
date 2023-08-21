#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in a string
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *full = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*full && *sub && *full == *sub)
		{
			full++;
			sub++;
		}
		if (!*sub)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
