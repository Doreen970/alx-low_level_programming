#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to be searched for
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s != '\0')
	{
		k = accept;
		while (*k != '\0')
		{
			if (*s == *k)
				return (s);
			k++;
		}
		s++;
	}
	return (NULL);
}
